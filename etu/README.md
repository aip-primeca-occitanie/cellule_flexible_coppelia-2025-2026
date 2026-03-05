# Dossier etu

## 1) Composition des dossiers

**Faire ça**



## 2) Consigne pour les étudiants 

### 2.1) Fichier à modifier

  Lors de la **première séance du TER uniquement**, renommer le fichier principal XXX_XXX.main_commande.cpp en y mettant vos initiales (majuscule, sans espace, sans accent, sans symboles spéciaux) par la commande suivante (ou manuellement):
```bash
	mv XXX_XXX.main_commande.cpp VOS_INITIALES.main_commande.cpp
```

  Ce fichier sera **le seul à être modifié par les étudiants**. Il leur permettra d'écrire leur réseau de Pétri pour respecter les consignes.


### 2.2) Consignes pour lancer la simulation

* **Pour compiler la simulation**

A **chaque nouvelle ouverture d'un terminal** directement **dans le dossier etu**, on fait :
```bash
	source script0_Compile.sh VOS_INITIALES dataprodconfig
```

Veillez à remplacer VOS_INITIALES par le nom du fichier .cpp que vous voulez utiliser. Remplacez également dataprodconfig par une des séquences disponible dans dataprodconfig.

Par exemple, si vos initiales sont SUN_SC (et donc le fichier commande associé est SUN_SC.main_commande.cpp), et que le fichier data à considérer est dataP34_1_1_n0.prodconfig.h, alors l'instruction pour compiler sera : 
```bash
	source script0_Compile.sh SUN_SC dataP34_1_1_n0
```

Il faut veillez à exécuter cette ligne de commande **à chaque nouvelle modification de votre fichier** VOS_INITIALES.


* **Pour lancer la simulation**
Après avoir vérifié qu'aucune erreur de compilation ne s'est précédemment produite, dans le même terminal, exécuter :
```bash
	./script1_Run.sh 
```

* **Pour importer les résultats de la simulation**

Après avoir choisi  "4-Fin programme" dans le menu de la fenêtre XTERMINAL, on peut faire :
```bash
	./script2_GetSimuOutput.sh VOS_INITIALES NOM_FICHIER_DATA
```

Après chaque exécution sans bug de la simulation et après l'import des résultats avec le script2, un fichier log nommé "VOS_INITIALES_NOM_FICHIER_DATA.log.txt" doit apparaitre dans le dossier "output". 
Si ce fichier n'existe pas, c'est qu'il y a eu une erreur lors de votre simulation.

Par exemple, si vos initiales sont SUN_SC (et donc le fichier commande associé est SUN_SC.main_commande.cpp), et que le fichier data à considérer est dataP34_1_1_n0.prodconfig.h, alors l'instruction pour compiler sera : 
```bash
	./script2_GetSimuOutput.sh SUN_SC dataP34_1_1_n0
```

* **Pour vérifier la validité de l'exécution de la simulation**

Le fichier log précédemment généré permet de vérifier la validité de votre simulation par rapport aux données d'entrée.

Pour ce faire, depuis la racine du dossier "etu", vous pouvez exécuter:

```bash
	./script3_Validation.sh VOS_INITIALES NOM_FICHIER_DATA
```

Cela vous dit alors si la simulation s'est passée correctement.


* **Pour générer la documentation**

Pour générer la documentation associée à votre code, depuis la racine du dossier "etu", exécuter:
```bash
	./script4_Documentation.sh VOS_INITIALES
```

Pour accéder à la documentation, aller dans le dossier output/docfromcpp/html et ouvrir index.html. A partir de ce fichier, aller dans Files/File
List et choisir celui correspondant à notre fichier. Cela permet d'afficher les détails sur la simulation. On y retrouve par exemple les commentaires de chaque étape du réseau de Pétri. 


### 2.3) Exemple à exécuter

Pour vérifier que la simulation Coppelia fonctionne correctement, on utilise le fichier Tuto_Basique contenu dans le dossier exemple :

```bash
	cp exemple/Tuto_Basique.main_commande.cpp .
	./script0_Compile.sh Tuto_Basique dataP2_1_1_n0
	./script1_Run.sh
	./script2_GetSimuOutput.sh Tuto_Basique dataP2_1_1_n0
	./script3_Validation.sh Tuto_Basique dataP2_1_1_n0
	./script4_Documentation.sh Tuto_Basique
	rm Tuto_Basique.main_commande.cpp
```
