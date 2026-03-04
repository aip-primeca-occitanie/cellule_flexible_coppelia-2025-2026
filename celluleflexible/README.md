# Dossier Cellule Flexible

## 1) Contenu du dossier

Ce répertoire regroupe toute la partie "bas niveau" de la simulation, contenant à la fois l'environnement virtuel, la documentation technique, et l'espace de travail ROS 2 permettant de faire le pont entre les commandes et les actionneurs/capteurs.

Voici le détail du contenu de chaque sous-dossier :

### 1.1) CoppeliaSim

Ce dossier contient le logiciel de simulation robotique.

* **Version utilisée** : Nous utilisons actuellement la version **V4.3.0 Edu**.
* **Fichiers clés** :
* Dans le répertoire `models/montrac`, nous retrouvons les fichiers `.ttm` correspondant aux modèles 3D de nos navettes.
* À la racine de ce dossier se trouve le plugin `simROS2Interface`. C'est l'élément central qui permet de réaliser la communication et l'échange de messages entre nos scripts `.lua` (dans CoppeliaSim) et notre espace de travail ROS 2 (`ros_ws`).


* **En cas de mise à jour (MAJ)** : Si vous décidez de passer à une version plus récente de CoppeliaSim (comme la V4.10.0), sachez que l'API Lua a subi de nombreuses modifications. Cela impliquera de devoir réécrire et adapter les codes `.lua` intégrés dans la scène `.ttt` (changement du nom de certaines fonctions natives), ainsi que de recompiler potentiellement le plugin `simROS2Interface` pour l'adapter à la nouvelle architecture du logiciel. De plus, il faudra surement aussi adapter l'ensemble des objets de l'arborescence de la scène de la simulation (robot : joint, actionneur...), ce qui devrait représenter un travail assez important contenu de l'exhaustivité des objets physiques de la scène 'simulation4robots'
*(Pour plus de détails, voir le readme du dossier 'CoppeliaSim')*

### 1.2) sim

C'est ici que se trouve l'environnement de la simulation. On y retrouve la scène principale de notre simulation (le fichier `.ttt`), ainsi que l'ensemble des scripts `.lua` appelés par les différents éléments de la maquette virtuelle (capteurs, actionneurs, etc.).
*(Pour plus de détails, voir le readme du dossier 'sim')*

### 1.3) Doc

Ce répertoire rassemble la documentation annexe. On y retrouve notamment l'historique complet détaillant comment a été réalisé ce projet au fil des années, ainsi que des photos utiles de la maquette réelle de la MFJA, servant de référence physique pour la simulation.
*(Pour plus de détails, voir le readme du dossier 'Doc')*

### 1.4) ros_ws

Il s'agit de l'espace de travail (workspace) ROS 2. Il contient le code source (`src`) des différents packages développés pour la cellule flexible (aiguillages, commande, navettes, robots, etc.) ainsi que les dossiers générés lors de la compilation (`build`, `install`, `log`).
*(Pour plus de détails, voir le readme du dossier 'ros_ws')*

### 1.5) forTER

Ce dossier contient des outils supplémentaires destinés au projet TER, notamment des scripts d'évaluation de séquences comme `checker.py` ou des fichiers de configuration pour la documentation (`Doxyfile`). A REFAIRE
*(Pour plus de détails, voir le readme du dossier 'forTER')*

---

## 2) Protocole complet d'exécution avec ROS 2

Pour lancer la communication ROS 2 et démarrer les nœuds gérant la cellule flexible, vous devez ouvrir un terminal et exécuter les commandes suivantes. Ce protocole d'execution est utile en tant que développeur pour tester les noeuds et les scripts .lua, avant de passer par la procédure d'exuction à partir de scripts dans le dossier 'cellule_flexible_coppelia-2025-2026' (procédure "étudiant").

Voici le détail étape par étape et l'utilité de chaque ligne :

```bash
cd Desktop/cellule_flexible_coppelia-2025-2026/celluleflexible/ros_ws/

```

>>> Cette commande permet de naviguer dans l'arborescence de votre machine pour vous placer à la racine de l'espace de travail ROS 2 (`ros_ws`), là où se trouvent les sources et où la compilation doit s'effectuer.

```bash
source /opt/ros/jazzy/setup.bash

```

>>> Cette ligne "source" l'installation globale de ROS 2 (version Jazzy). Elle permet à votre terminal de comprendre les commandes spécifiques à ROS 2 (comme `colcon` ou `ros2 run` / `ros2 launch`).

```bash
colcon build

```

>>> Cette commande compile l'intégralité des packages présents dans le dossier `src` de votre `ros_ws`. Elle va générer (ou mettre à jour) les dossiers `build` et `install`.

```bash
source install/setup.bash

```

>>> Une fois la compilation terminée, cette commande ajoute vos propres packages  compilés (situés dans le dossier `install`) à l'environnement de votre terminal. Sans cela, ROS 2 ne saurait pas où trouver vos nœuds et fichiers de lancement locaux.

```bash
ros2 launch launcher launch_alpha.launch.py

```

>>> Cette ligne lance le fichier de démarrage principal (alpha) situé dans le package `launcher`. C'est  lui qui va instancier les éléments de commande globale et l'interface de la simulation.*(Pour plus de détails, voir le readme du dossier '/ros_ws/src/launcherReadme.md')*
