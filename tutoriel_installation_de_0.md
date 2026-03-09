##  Guide d'installation
    
### 1.2) Installation de git
Comment installer git : 
ouvrer un terminal à la racine de votre PC
ecrire :"sudo apt install git"
ecrire "sudo apt update"

### 1.3) Récupérez le dossier GitHub sur votre espace de travail :
Pour cela, exécutez dans votre espace de travail :
```bash
   git clone https://github.com/ngueveu/shuttles-and-robots-challenge-for-students
```
### 1.4) installer ROS2 Jazzy
suivez le tuto depuis : https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html

Les lignes à executer sont les suivantes : 

locale  # check for UTF-8
-------------------
sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
--------------------
sudo apt install software-properties-common
sudo add-apt-repository universe
-------------------
sudo apt update && sudo apt install curl -y
export ROS_APT_SOURCE_VERSION=$(curl -s https://api.github.com/repos/ros-infrastructure/ros-apt-source/releases/latest | grep -F "tag_name" | awk -F\" '{print $4}')
curl -L -o /tmp/ros2-apt-source.deb "https://github.com/ros-infrastructure/ros-apt-source/releases/download/${ROS_APT_SOURCE_VERSION}/ros2-apt-source_${ROS_APT_SOURCE_VERSION}.$(. /etc/os-release && echo ${UBUNTU_CODENAME:-${VERSION_CODENAME}})_all.deb"
sudo dpkg -i /tmp/ros2-apt-source.deb
--------------------
sudo apt update && sudo apt install ros-dev-tools
----------------------
sudo apt update
-------------------------
sudo apt upgrade
-------------------------
sudo apt install ros-jazzy-desktop
--------------------------
Sudo apt install python3-nom_comm

sudo apt update && sudo apt install xterm

sudo apt update && sudo apt install doxygen

sudo apt update && sudo apt install python3-xmlschema

sudo apt update && sudo apt install xsltproc

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

### 1.2) Installation de ROS2

