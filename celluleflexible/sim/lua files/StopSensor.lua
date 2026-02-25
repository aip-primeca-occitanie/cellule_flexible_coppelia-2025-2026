-- DO NOT WRITE CODE OUTSIDE OF THE if-then-end SECTIONS BELOW!!

if (sim_call_type==sim.syscb_init) then
    -- On initialise la variable à vide par sécurité
    pub = nil

    -- Vérification : Est-ce que le module ROS2 est chargé ?
    if simROS2 then
        -- Tentative de création du publisher (Topic: /sim_ros_interface/SwitchSensor)
        -- On utilise pcall pour éviter un crash si la création échoue momentanément
        local status, createdPub = pcall(simROS2.createPublisher, '/StopSensor', 'std_msgs/msg/Int32')
        
        if status and createdPub then
            pub = createdPub
            -- sim.displayDialog('Info', 'Publisher SwitchSensor créé avec succès.', sim.dlgstyle_message, false)
        else
            sim.displayDialog('Error', 'Le plugin est là, mais impossible de créer le publisher!', sim.dlgstyle_ok, false)
        end
    else
        -- sim.displayDialog('Error', 'ROS 2 plugin was not found.', sim.dlgstyle_ok, false)
    end
end

if (sim_call_type==sim.syscb_actuation) then

end

if (sim_call_type==sim.syscb_sensing) then
    -- SECURITÉ CRITIQUE : Si le publisher n'existe pas encore, on arrête tout de suite pour ne pas planter.
    if not pub then return end

    -- Ton calcul original (sans boucle for, comme demandé)
    -- Using nil instead of NULL for the third argument
    sum = math.pow(2,0)*sim.checkProximitySensor(sim.getObjectHandle('CP01'),sim.handle_all,nil)
    +math.pow(2,1)*sim.checkProximitySensor(sim.getObjectHandle('CP02'),sim.handle_all,nil)
    +math.pow(2,2)*sim.checkProximitySensor(sim.getObjectHandle('CP03'),sim.handle_all,nil)
    +math.pow(2,3)*sim.checkProximitySensor(sim.getObjectHandle('CP04'),sim.handle_all,nil)
    +math.pow(2,4)*sim.checkProximitySensor(sim.getObjectHandle('CP05'),sim.handle_all,nil)
    +math.pow(2,5)*sim.checkProximitySensor(sim.getObjectHandle('CP06'),sim.handle_all,nil)
    +math.pow(2,6)*sim.checkProximitySensor(sim.getObjectHandle('CP07'),sim.handle_all,nil)
    +math.pow(2,7)*sim.checkProximitySensor(sim.getObjectHandle('CP08'),sim.handle_all,nil)
    +math.pow(2,8)*sim.checkProximitySensor(sim.getObjectHandle('CP09'),sim.handle_all,nil)
    +math.pow(2,9)*sim.checkProximitySensor(sim.getObjectHandle('CP10'),sim.handle_all,nil)
    
    -- Envoi sécurisé
    simROS2.publish(pub, {data=sum})
end

if (sim_call_type==sim.syscb_cleanup) then

end
