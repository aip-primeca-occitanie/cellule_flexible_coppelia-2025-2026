-- DO NOT WRITE CODE OUTSIDE OF THE if-then-end SECTIONS BELOW!! (unless the code is a function definition)

if (sim_call_type==sim.syscb_init) then

    -- Initialisation de ROS 2 (Jazzy/Humble)
    -- On vérifie simplement si simROS2 est disponible
    if not simROS2 then
        sim.displayDialog('Error','ROS 2 plugin was not found.&&nSimulation will not run properly',sim.dlgstyle_ok,false,nil,{0.8,0,0,0,0,0},{0.5,0,0,1,1,1})
    else
        -- Récupération du handle du capteur (Indispensable pour la ligne 41)
        visionSensorHandle=sim.getObjectHandle('Vision_sensor')

        -- Création du Publisher pour ROS 2
        -- Note: simROS2.createPublisher remplace simROS.advertise
        pubImage=simROS2.createPublisher('/camera/image_raw', 'sensor_msgs/msg/Image')
    end
end


if (sim_call_type==sim.syscb_actuation) then

end


if (sim_call_type==sim.syscb_sensing) then
    -- On vérifie que le handle existe pour éviter le crash
    if visionSensorHandle then
        local data,w,h=sim.getVisionSensorCharImage(visionSensorHandle)
        
        if data then
            local d={}
            d['header']={
                frame_id="vision_sensor_frame",
                stamp=simROS2.getTime() -- getTime adapté pour ROS 2
            }
            d['height']=h
            d['width']=w
            d['encoding']='rgb8'
            d['is_bigendian']=0 -- Souvent 0 pour Little Endian sur PC standard
            d['step']=w*3
            d['data']=data
            
            -- Publication adaptée pour ROS 2
            simROS2.publish(pubImage,d)
        end
    end
end


if (sim_call_type==sim.syscb_cleanup) then

end
