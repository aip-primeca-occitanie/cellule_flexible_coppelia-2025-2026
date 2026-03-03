# Projet Cellule Flexible MFJA

## 1)Partie informative étudiant

### 1.1) Vidéo de présentation
La vidéo suivante montre un exemple de ce que peut faire la simulation sur CoppeliaSim :
https://user-images.githubusercontent.com/84821679/198697250-7861b35a-a503-4246-86e2-939076bb784c.mp4

### 1.2) Présentation générale du projet
L’objectif de ce projet est d’amener les étudiants à concevoir puis à implémenter un réseau de Pétri afin d’en comprendre concrètement l’utilité et les applications.

Comme support pédagogique, nous utilisons une représentation virtuelle de la cellule flexible existante de la MFJA, en combinant ROS2 et CoppeliaSim.

Le réseau de Pétri ainsi implémenté permettra de piloter les navettes, les aiguillages et les bras robotiques de la simulation afin de reproduire une séquence de production donnée, à l’image du fonctionnement d’une véritable usine.

Ce TER a donc pour ambition de développer et de mettre en œuvre la capacité à produire automatiquement et en parallèle au sein d’un atelier flexible.


### 1.3) Fonctionnement de la simulation
La simulation prend en entrée une séquence de production, décrivant les produits à faire, ainsi que les tâches qui les composent.

A partir de cette séquence, nous allons avoir 8 postes de production qui vont réaliser les tâches à faire. Les produits seront représentés par un empilement de cubes de couleur : un cube pour le type de produit et un cube pour chaque tâche effectuée. Les cubes seront transparents quand la tâche sera en cours et opaque quand elle sera terminée.

A la fin d'une tâche, si la tâche suivante ne se fait pas sur le même poste, il faut déplacer le produit. Nous appelons alors le robot du poste sur lequel on est, soit pour déplacer le produit au poste conjugué (2 postes par robot), soit pour le déplacer à une navette. Les navettes servent à transporter un produit jusqu'à une autre paire de poste.

La navette va naviguer sur un circuit, comportant des capteurs de position, des actionneurs et des aiguillages. Cela permet de diriger les navettes et de les arrêter à un endroit voulu.

L'évacuation du produit se fait lorsque toutes ses tâches sont terminées.

Nous rappelons les règles à respecter : 
* Le type du produit doit être compris entre 1 et 6
* Le nombre de tâches à faire par produit doit être compris entre 1 et 5
* L'évacuation se fait impérativement par le poste 3
* Un poste ne peut faire qu'une seule tâche d'un seul produit en même temps
* Interdiction de circuler sur le voies près des postes si ce n'est pour y amener/récupérer un produit

Le schéma suivant permet de repérer les aiguillages, les capteurs, les postes et les robots:
![Image_Capteurs_et_Actionneurs](../../../Doc/CelluleSchema.png)


### 1.4) Lancement de la simulation
Nous avons plusieurs moyens de lancer la simulation. Cependant, le moyen le plus simple et celui utilisé par les étudiants consiste à exécuter les lignes suivantes (après avoir ouvert un terminal depuis ce dossier) :
* Pour aller dans le dossier etu :
  ```bash
     cd etu
   ```
* Pour récupérer l'exemple Tuto_Basique :
  ```bash
     cp exemple/Tuto_Basique.main_commande.cpp .
   ```
* Pour compiler les modifications :
  ```bash
     source script0_Compile.sh Tuto_Basique dataP2_1_1_n0
   ```
* Pour lancer l'exécution de la simulation :
  ```bash
     ./script1_Run.sh
   ```
   
   
   
## 2) Partie développement

### 2.1) Contenu de chaque dossier
Nous utilisons pour le moment la version **V4.3.0** Edu de CoppeliaSim et la version **Jazzy** de ROS2.

Dans le dossier celluleflexible, nous retrouvons toute la partie bas niveau de la simulation, ainsi que la communication entre CoppeliaSim et ROS2.
Dans le dossier etu, nous retrouvons tout le matériel mis à disposition pour les étudiants, à savoir les scripts de lancement, des exemples de séquence de production et des exemples de réseau de Pétri.

Le logiciel CoppeliaSim est récupéré directement lors du téléchargement du dossier GitHub, mais il faut installer ROS2, ainsi que quelques extensions.

Si vous partez d'une machine virtuelle vierge, nous vous invitons à vous référer au "tutoriel_installation_de_0" présent dans ce dossier.

Si vous venez de récupérer le fichier GitHub et voulez l'exécuter, nous vous invitons à vous référer au "tutoriel_installation_depuis_GitHub" présent dans ce dossier.


### 2.2) Pistes d'amélioration
Après la migration de ROS1 noetic à ROS2 jazzy, nous pensons qu'il serait bon de faire les tâches suivantes :
* Mettre à jour Coppelia. Nous utilisons dans la simulation la version V4.3.0 mais la dernière version sortie est la V4.10.0.
    **+ Comparaison entre les deux versions**
    **+ Dire quelles types de modifications cela implique**
    **+ Dire qu'est ce qui changera dans notre simulation**

* Faire le lien entre la maquette réelle et la simulation. **Le lien avait déjà été établi lors d'un projet d'une année précédente, sans pouvoir néanmoins être utilisé, à cause du déménagement à la MFJA. Les anciens packages schneider, schneider103 et schneider104 (ROS1) avaient été créés pour cela. Nous avons également retrouvé des traces de ce lien dans le package commande. En effet, le fichier *communication_baxter.cpp* sert à envoyer des ordres aux robots réels et une partie du fichier *actionneurs.cpp* sert à convertir les ordres pour la simulation réelle. Enfin, dans le package commande_locale, lors de l'affichage du menu, nous avons encore le choix entre Simu ou Atelier, qui change le type de cellule.**
* **Liste des tâches qu'on a pas eu le temps de faire**

* Faire fonctionner le fichier display, présent dans commande_locale. Ce fichier a pour but d'ouvrir une nouvelle fenêtre pour suivre la simulation sous un autre angle.
  
  Tout d'abord, l'exécutable de ce noeud est le seul à ne pas être lancé lors de la simulation générale. Néanmoins, en le lançant depuis la machine ROS1 en même temps que la simulation, nous voyons une fenêtre bleue apparaitre, mais sans rien afficher de plus (pas de deuxième vue de la simulation). Nous soupçonnons alors que ce fichier ait été utilisé par le passé mais qu'il ne soit plus en état de fonctionner. Nous l'avons donc traduis en ROS2, sans pour autant le tester correctement.
  
  Nous pouvons seulement dire que ce noeud interfère avec le fichier lua Vision_sensor, présent sous celluleflexible/sim/luafiles. Pour augmenter la rapidité de notre simulation, nous avons été contraints à commenter certaines parties de ce code. En effet, l'ordre envoyé était de publier sur un topic 50 images par secondes pour recréer la vidéo de la simulation sous un autre angle. En ROS2, un tel envoi de donnée n'est plus possible (changement de communication). Pour remettre le fichier display en état, il faudra donc s'occuper ce fichier lua également.

* Rajouter certaines sécurités dans le code.

  Par exemple, pour les aiguillages, l'ordre de tourner l'aiguillage 15 n'est pas refusé alors que les aiguillages ne vont que jusqu'à 12. Cette erreur pourra être réglée dans le package Aiguillages. 
  
  Ne pas hésiter à vérifier d'autres sécurités, tel que la demande d'un capteur ou d'un robot non présents.
  
* Rajouter dans le code des messages informatifs et des messages d'erreurs, pour passer moins de temps au débogage.

### 2.3) Liens utiles
Les liens qui nous ont été utiles sont les suivants :
* *https://www.youtube.com/watch?v=flT3LIIR5qo* et *https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html* sont des fichiers qui nous ont aidé à installer ROS2 Jazzy
* *https://www.youtube.com/watch?v=FYKHbm4YXkA*, *https://www.youtube.com/watch?v=HJAE5Pk8Nyw* et *https://docs.ros.org/en/jazzy/Tutorials.html* qui nous ont aidé à comprendre comment fonctionnait ROS2
* *https://docs.ros.org/en/rolling/Releases.html*, qui nous a permis de comprendre les différences entre les versions de ROS2. Nous avons choisit ROS2 JAzzy, étant à ce jour la version ayant la EOL date la plus lointaine (End Of Life date).
* *https://docs.ros.org/en/rolling/Releases.html*, qui nous a aidé à installer l'interface entre ROS2 et CoppeliaSim
* *https://docs.ros.org/en/rolling/How-To-Guides/Migrating-from-ROS1.html*, qui nous a permis de commencer à migrer quelques fonctions de ROS1 à ROS2


