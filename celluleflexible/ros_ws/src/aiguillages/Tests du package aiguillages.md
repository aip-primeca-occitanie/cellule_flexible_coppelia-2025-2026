Afin de tester l'intégration indépendamment de CoppeliaSim, vous pouvez simuler son comportement en ligne de commande depuis des terminaux : 

* Test du noeud aiguillage sans Coppelia : 
  * Phase 1 : vérifier la connectivité
 
    Pour ce test, on ouvre 2 terminaux à la source du dossier ros_ws.
    Dans un TERMINAL 1, faire :
    ```bash
      source /opt/ros/jazzy/setup.bash
      colcon build --packages-select aiguillages
      source install/setup.bash
      ros2 run aiguillages run_Aiguillage 
    ```
    Dans un TERMINAL 2, faire :
    ```bash
      source /opt/ros/jazzy/setup.bash
      ros2 topic list
    ```
    Vous devriez voir la liste des topics actifs apparaitre. Cela permet de voir si tous les topics ont été correctement créés.


  * Phase 2 : test de commande
  
    Pour ce test, on ouvre 4 terminaux à la source du dossier ros_ws.
    Dans le TERMINAL 1, on run le noeud :
    ```bash
      source /opt/ros/jazzy/setup.bash
      colcon build --packages-select aiguillages
      source install/setup.bash
      ros2 run aiguillages run_Aiguillage 
    ```

    Dans le TERMINAL 2, on écoute le topic :
    ```bash
      source install/setup.bash
      ros2 topic echo /commande/AiguillageDroite
    ```

    Dans le TERMINAL 3, on publie un message sur un topic sur lequel on souscrit. On demande de faire tourner l'aiguillage 5 à droite.
    ```bash
      source install/setup.bash
      ros2 topic pub -1 /commande/Simulation/AiguillageDroite std_msgs/msg/Int32 "{data: 5}"
    ```

    Dans le TERMINAL 4, on simule un message de réponse de Coppelia, qui renverrait que l'aiguillage 5 a correctement tourné.
    ```bash
      source install/setup.bash
      ros2 topic pub -1 /sim_ros_interface/SwitchSensor aiguillages/msg/MsgSensorState "{header: {frame_id: 'world'}, dd: [false, false, false, false, false, false, false, false, false, false, false, false, false], dg: [false, false, false, false, false, false, false, false, false, false, false, false, false]}"
      ros2 topic pub -1 /sim_ros_interface/SwitchSensor aiguillages/msg/MsgSensorState "{header: {frame_id: 'world'}, dd: [false, false, false, false, false, true, false, false, false, false, false, false, false]}"
    ```

    Dans le TERMINAL 5, on écoute le topic de verrouillage.
    ```bash
      source install/setup.bash
      ros2 topic echo /commande/VerouilleAiguillage
    ```



* Test du noeud aiguillage avec CoppeliaSim (script .lua):
  
Refaire le test de commande pas à pas, mais cette fois-ci en lançant Coppelia, au lieu de simuler ses publications (étape du terminal 4 faite par Coppelia)
