Tutoriel pour faire fonctionner la simulation à partir d'une machine virtuelle fonctionnelle

# 1) Récupérez le dossier GitHub sur votre espace de travail :
Pour cela, exécutez dans votre espace de travail :
```bash
   git clone https://github.com/ngueveu/shuttles-and-robots-challenge-for-students
```

# 2) Compilez le dossier simROS2interface de CoppeliaSim :
Pour cela, suivez le chemin `shuttles-and-robots-challenge-for-students/celluleflexible/ros_ws`, puis ouvrez un terminal. Exécutez alors :
```bash
   source /opt/ros/jazzy/setup.bash
   cd ../CoppeliaSim
```

Cela permet de sourcer ROS2 et d'aller dans le dossier CoppeliaSim. Ensuite, trouvez le chemin jusqu'à CoppeliaSim et exécutez la commande suivante :
```bash
   export COPPELIASIM_ROOT_DIR=path_to_CoppeliaSim
```

Par exemple, pour un clone situé directement dans le dossier home/user/, cela donne :
```bash
   export COPPELIASIM_ROOT_DIR=~/shuttles-and-robots-challenge-for-students/celluleflexible/CoppeliaSim
```

Enfin, exécutez et attendez la fin de la compilation de :
```bash
   colcon build --packages-select sim_ros2_interface --symlink-install
```

Vous pouvez alors fermer ce terminal.

# 3) Lancement de la simulation :
Le dossier est maintenant prêt pour lancer la simulation. On ouvre un nouveau terminal dans le dossier principal (contenant etu et celluleflexible). On répète alors le protocole suivant :
```bash
   cd etu
   cp exemple/Tuto_Basique.main_commande.cpp .
   source script0_Compile.sh Tuto_Basique dataP2_1_1_n0
   ./script1_Run.sh
```

Ces lignes compilent l'intégralité des packages, et lancent la simulation en suivant le fichier `Tuto_Basique` et la dataprodconfig `dataP2_1_1_n0`.
