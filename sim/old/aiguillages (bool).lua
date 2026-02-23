-- Fonction de sécurité pour trouver un objet sans faire planter le script
function getHandleSafe(name)
    local status, handle = pcall(sim.getObjectHandle, name)
    if status then return handle else return -1 end
end

-- Fonction d'Initialisation
function do_init()
    print("--- DÉBUT INITIALISATION ---")
    
    -- A. Vérification ROS 2
    if simROS2 then
        print("? Plugin ROS 2 détecté.")
    else
        print("? ERREUR : Plugin ROS 2 absent.")
        return
    end

    -- B. Recherche des moteurs (Double tentative de nommage)
    jointHandles = {}
    for i=1, 12 do
        local name1 = string.format("A%02d", i)       -- Essai A01
        local name2 = "Sode_aiguillage_A"..i          -- Essai Sode_aiguillage_A1
        
        local h = getHandleSafe(name1)
        if h == -1 then h = getHandleSafe(name2) end
        
        if h ~= -1 then
            jointHandles[i] = h
        else
            print("? ERREUR : Moteur "..i.." introuvable ("..name1.." ou "..name2..")")
        end
    end

    -- C. Création Publisher (Le coeur du problème)
    local status, pub = pcall(function()
        return simROS2.createPublisher('/sim_ros_interface/SwitchSensor', 'aiguillages/msg/MsgSensorState')
    end)
    
    if status then
        pubSensors = pub
        print("? PUBLISHER CRÉÉ : /sim_ros_interface/SwitchSensor")
    else
        print("? ECHEC CRÉATION PUBLISHER. Vérifie que tu as bien sourcé le terminal avant de lancer CoppeliaSim !")
    end

    -- D. Subscribers
    simROS2.createSubscription('/sim_ros_interface/SwitchControllerRight', 'std_msgs/msg/Int32', 'right_callback')
    simROS2.createSubscription('/sim_ros_interface/SwitchControllerLeft', 'std_msgs/msg/Int32', 'left_callback')
    simROS2.createSubscription('/sim_ros_interface/SwitchControllerLock', 'std_msgs/msg/Int32', 'lock_callback')

    cmd_right = nil; cmd_left = nil; cmd_lock = 0
    pi = 3.14159265359
    initialized = true
    print("--- FIN INITIALISATION ---")
end

-- Callbacks
function right_callback(msg) cmd_right = msg.data end
function left_callback(msg) cmd_left = msg.data end
function lock_callback(msg) cmd_lock = msg.data end

-- BOUCLE PRINCIPALE (Compatible Ancien & Nouveau système)
if (sim_call_type==sim.syscb_init) then
    do_init()
end

-- Rattrapage : Si l'init n'a pas tourné, on le force au premier passage
if not initialized and (sim_call_type==sim.syscb_actuation or sim_call_type==sim.syscb_sensing) then
    if not try_init_once then
        print("?? Force Init...")
        do_init()
        try_init_once = true
    end
end

if (sim_call_type==sim.syscb_actuation) then
    if not initialized or not simROS2 then return end
    
    if cmd_right ~= nil then
        print("?? Action Droite reçue : "..cmd_right)
        for i=1, 12 do
            if jointHandles[i] ~= -1 then
                local bitMask = math.pow(2, i-1)
                if sim.boolAnd32(cmd_right, bitMask) > 0 and sim.boolAnd32(cmd_lock, bitMask) > 0 then
                    sim.setJointTargetPosition(jointHandles[i], 0)
                end
            end
        end
        cmd_right = nil
    end
    
    if cmd_left ~= nil then
        print("?? Action Gauche reçue : "..cmd_left)
        for i=1, 12 do
            if jointHandles[i] ~= -1 then
                local bitMask = math.pow(2, i-1)
                if sim.boolAnd32(cmd_left, bitMask) > 0 and sim.boolAnd32(cmd_lock, bitMask) > 0 then
                     local angle = -120 * pi / 180
                     if (i % 2 == 0) then angle = 120 * pi / 180 end
                     sim.setJointTargetPosition(jointHandles[i], angle)
                end
            end
        end
        cmd_left = nil
    end
end

if (sim_call_type==sim.syscb_sensing) then
    if not initialized or not simROS2 or not pubSensors then return end

    local dd_array = {}
    local dg_array = {}
    
    for i=1, 12 do
        if jointHandles[i] ~= -1 then
            local pos = sim.getJointPosition(jointHandles[i])
            table.insert(dd_array, (math.abs(pos) < 0.1))
            table.insert(dg_array, (math.abs(pos) > 1.0))
        else
            table.insert(dd_array, false)
            table.insert(dg_array, false)
        end
    end
    -- Ajout pour C++ (taille 13)
    table.insert(dd_array, false)
    table.insert(dg_array, false)

    local data = {}
    data['header'] = {frame_id = 'world', stamp = simROS2.getTime()}
    data['dd'] = dd_array
    data['dg'] = dg_array
    
    simROS2.publish(pubSensors, data)
end
