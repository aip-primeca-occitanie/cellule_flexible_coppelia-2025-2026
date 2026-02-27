# Package commande

## 1. Description générale

Ce fichier sert à développer le réseau de Pétri et se charge de traduire les envois de message sur des topics en fonction simples pour les étudiants. Dans le réseau de Pétri les étudiants auront recours au fonctions :
*
*
*
*
*
*
*

## 2. Composition
Ce dossier est composé de 3 éléments:
* Un fichier package.xml
* Un fichier CMakeLists.txt
* Un dossier src, où se trouve le code source C++ et composé des fichiers suivants :
  * main_commande.cpp, qui contient le réseau de pétri haut niveau des étudiants
  * actionneurs.cpp et actionneurs.h, qui transforme les tableaux de données en nombres entiers
  * AigsInterface.cpp et AigsInterface.h, qui sert d'intermédiaire entre le réseau de Pétri et les aiguillages
  * capteurs.cpp et capteurs.h, qui 
  * commande.cpp et commande.h, qui 
  * communicationbaxter.cpp et communicationbaxter.h, qui 
  * RobotsInterface.cpp et RobotsInterface.h, qui 
 
Tous ces fichiers sont lancés à partir d'un exécutable noté "run".


## 3. Description détaillée des fichiers src
### 3.1. Fichier main_commande.cpp
Ce fichier est le fichier principal de la simulation, et c'est celui-là qui sera modifié par les étudiants. Il contient le réseau de Pétri modifié par les étudiants et des fonctions d'initialisation.
Ce fichier est composé de la fonction *display*, qui affiche à chaque changement le marquage du Réseau de Pétri et de la fonction *main*, qui :
* Initialise les robots, les aiguillages et les capteurs
* Attend la fin de l'initialisation des robots
* Demande à l'utilisateur le nombre de navettes voulu
* Contient l'intégralité du réseau de Pétri (appelle dedans des fonctions pour faire les tâches, tourner des aiguillages, stopper les navettes...)


### 3.2. Fichiers actionneurs.cpp et actionneurs.h
Ces fichiers sont composés des fonctions suivantes (en plus du constructeur, qui sert à initialiser les variables du fichier dans un état sécuritaire) : 
* *Envoyer*, qui
* *Ecrire_ligne_STx*, *Ecrire_ligne_RxD*, *Ecrire_ligne_RxG*, *Ecrire_ligne_PIx*, *Ecrire_ligne_Vx*, *Ecrire_ligne_Dx*, qui
* *publish_actionneurs_ligne*, qui
* *publish_actionneurs_simulation*, qui
* *WRITE*, qui


### 3.3. Fichiers AigsInterface.cpp et AigsInterface.h
Ce fichier est composé de deux fonctions, une pour envoyer un message pour tourner l'aiguillage à droite et une pour tourner l'aiguillage à gauche. Ces messages sont envoyés directement sur des topics lus par le package aiguillages.
C'est de fichier qui permet à l'étudiant de n'avoir qu'à marquer "aiguillage.droite" ou "aiguillage.gauche" dans le réseau de Pétri pour tourner ceux-ci.


### 3.3. Fichiers capteurs.cpp et capteurs.h


### 3.3. Fichiers commande.cpp et commande.h


### 3.3. Fichiers communicationbaxter.cpp et communicationbaxter.h


### 3.3. Fichiers RobotsInterface.cpp et RobotsInterface.h


### 3.6. Sécurités mises en place



## 4. Utilisation
Pour lancer le code depuis le répertoire ros, on fait d'abord :
```bash
  source /opt/ros/jazzy/setup.bash
  colcon build
  source install/setup.bash
```

Ensuite, on exécute la ligne suivante, qui permet d'exécuter tous les fichiers :
```bash
  ros2 run commande run 4
```
L'avant dernier mot ("run") correspond au nom de l'exécutable. Le dernier chiffre correspond au nombre de robots voulus, sachant que nous acceptons seulement le nombre 2 et le nombre 4. 

Au lancement de ce fichier, nous n'aurons rien, car la première étape consiste à attendre la fin de l'initialisation des robots. Pour obtenir l'exécution du réseau de Pétri, il faut donc que tous les robots aient fini leur initialisation.

