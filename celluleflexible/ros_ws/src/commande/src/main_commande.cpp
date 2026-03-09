/*###########################################################################
## ___ __ __                      __                      ___              ##
##  | |_ |__)   /\ |_ _ |o _  _  |_ | _   o|_ | _    __    |    |_ _       ##
##  | |__| \   /--\|_(-`||(-`|   |  |(-`><||_)|(-`         | |_||_(_)      ##
##                                                                         ##
############################################################################*/

/*!
 * \file Tuto_Basique.main_commande.cpp
 * \brief code correspondant au tuto du sujet de TER atelier flexible
 * \author Team Tuto_Basique (N7 2023-2024)
 * \version 0.1
 */

#include "capteurs.h"
#include "actionneurs.h"
#include "commande.h"
#include "RobotsInterface.h"
#include "AigsInterface.h"
#include <rclcpp/rclcpp.hpp>
#include <unistd.h>

using namespace std;

#include "prodconfig/productconfig.h"

#define RESET   "\033[0m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */

#define PlaceFin 1000 /* Marquage à ne pas dépasser */

int M[PlaceFin+1];

/* *****************************************************************
///////////  | Exemple configuration produits : début |  //////////
 ******************************************************************* */

// type de produit : séquence de POSTES : durée par poste : nombre de produits
// 2 : 1 4 : 4 5 : 2
// 6 : 7 6 5 : 3 6 3 : 1

/*
const vector<int> Prod_type{    2,
                                6};

const vector<int> Prod_qte{ 2,
                            1};

const vector<vector<int>> Prod_seqdeposte{  { POSTE_1, POSTE_4 },
                                            { POSTE_7, POSTE_6, POSTE_5 }};

const vector<vector<int>> Prod_dureeparposte{   { 4, 5 },
                                                { 3, 6, 3 }};
*/
/* ********************************************************
///////////  | Exemple configuration produits : fin |  //////////
 ******************************************************** */



/////////////////////////////////////////////////////////////////////////
//////////////////// | DEBUT DECLARE ETU | /////////////////
/////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////
/////////////////////  |  FIN DECLARE ETU  |   /////////////////
/////////////////////////////////////////////////////////////////////////


// Pour l'affichage //
void display()
{
    cout << endl;
    for (int i=0;i<=PlaceFin;i++)
    {
        if(i==0)
            cout << "Marquage : ";

        if(M[i]>0)
            cout<<BOLDRED<<"M["<<i<<"]="<<M[i]<<RESET<<", ";
        if(M[i]<0)
            cout<<BOLDGREEN<<"M["<<i<<"]="<<M[i]<<RESET<<", ";
    }
    cout<<endl<<endl;
}

void ShutdownCallback(const std_msgs::msg::Byte::SharedPtr msg)
{
        rclcpp::shutdown();
}

// Pour rÃ©cupÃ©rer une tÃ¢che non faite //
int prendre_objet(vector<int>& EtatObjet)
{
    for (int i = 0; i < EtatObjet.size(); i++)
    {
        if (EtatObjet[i] == 0)
        {
            EtatObjet[i] = 1;   // on rÃ©serve la machine
            return i;       // numÃ©ro du poste
        }
    }
    return -1;  // aucune machine libre
}

int main(int argc, char **argv)
{
    /* *************************************************
    ///////////  | Debut du Petri plus bas |  //////////
     ************************************************* */


    rclcpp::init(argc, argv); 
    auto node = rclcpp::Node::make_shared("commande"); 

    auto pub_spawnShuttles = node->create_publisher<std_msgs::msg::Int32>("/commande_locale/nbNavettes",10);
    auto sub_shutdown = node->create_subscription<std_msgs::msg::Byte>("/commande_locale/shutdown", 10, ShutdownCallback);

    int nbRobot=atoi(argv[1]);

    Commande cmd(node,argv[0]);
    RobotsInterface robot(node,nbRobot);
    AigsInterface aiguillage(node);
    Capteurs capteur(node);

    rclcpp::Rate loop_rate(25); //fréquence de la boucle

    // On attend la fin de l'initialisation des robots
    while(!robot.RobotInitialise(1) || !robot.RobotInitialise(2))
    {
        rclcpp::spin_some(node); 
        loop_rate.sleep();
    }
    while(nbRobot==4 && (!robot.RobotInitialise(3) || !robot.RobotInitialise(4)))
    {
        rclcpp::spin_some(node); 
        loop_rate.sleep();
    }

    /* *************************************************
    // | Creation des Navettes | //
     ************************************************* */

    cmd.activateShuttleManagerDisplay();
    // cmd.activateAutoRunSimu();
    int nbNavettes=0;//Mettre 0 pour demander a l'utilisateur
    while(nbNavettes<1||nbNavettes>6)
    {
        cout << "Combien voulez vous de navettes ? [1..6]" << endl;
        cin >> nbNavettes;
        if(cin.fail())
        {
            cout << endl << " [Erreur mauvais choix ..]" << endl;
            cin.clear();
            cin.ignore(256,'\n');
        }
    }

    std_msgs::msg::Int32 msg_nbNavettes; 
    msg_nbNavettes.data=nbNavettes;
    pub_spawnShuttles->publish(msg_nbNavettes);


    cmd.Initialisation();
    vector<int> Job_type;
    vector<vector<int>> Job_seqdeposte;
    vector<vector<int>> Job_dureeparposte;

    for (size_t i = 0; i < Prod_type.size(); ++i) {
        
        for (int q = 0; q < Prod_qte[i]; ++q) {
            
            Job_type.push_back(Prod_type[i]);
            Job_seqdeposte.push_back(Prod_seqdeposte[i]);
            Job_dureeparposte.push_back(Prod_dureeparposte[i]);
        }
    }
    size_t nb_postes;
    size_t nb_postes_2;
    size_t nb_objets_a_faire = Job_seqdeposte.size();
    int nb_objets_en_cours = 0;
    int nb_objets_finis = 0;
    int n=0;
    int m=0;
    int a=0;
    int b=1;
    int N=0;
    int P=0;
    vector<int> poste{0, 0};
    vector<int> EtatObjet(nb_objets_a_faire, 0);
    for(int i=0;i<PlaceFin;i++) M[i]=0;
    /* *************************************************
    ////// | MARQUAGE INITIAL | ////////
    ************************************************* */
    M[0]=1;
    display();

    ///////////////////////////////////////////////////////////////////
    ///////////////////// | DEBUT INIT ETU | ///////////////////
    ///////////////////////////////////////////////////////////////////


    ///////////////////////////////////////////////////////////////////
    /////////////////////  |  FIN INIT ETU  |  ////////////////////
    ///////////////////////////////////////////////////////////////////

    while (rclcpp::ok()) 
    {
        // Seulement si la simulation est en cours
        if(cmd.getPlay()==true)
        {
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //////////////////////////////////////// | DEBUT PETRI  ETU | /////////////////////////////////////////
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	    if(M[0])
            {
            /*!
                        * \b T1 : distribution WIP1
                        * \b T2 : distribution WIP2
                        * \b T3 : distribution NAVETTE 
                        * \arg positionnement des aiguillages et lancement du mode parallèle WIP1, WIP2 et NAVETTE
                        * \arg \b Precondition: M[0]
                        * \arg \b Postcondition: M[1]++, M[101]++, M[500]++
                        */
                M[0]--;

                aiguillage.Gauche(3);
                aiguillage.Gauche(10);
                aiguillage.Gauche(11);
                aiguillage.Gauche(12);
                aiguillage.Droite(1);

                cmd.Stop_PS(19);    // securite au cas ou si aiguillage pas bon et on va vers le robot 4
                cmd.Stop_PS(1);

                M[1]++;
                M[101]++;
		        M[500]++;
                display();
            }






	    if(M[1] && nb_objets_a_faire != (nb_objets_en_cours+nb_objets_finis))
            {
            /*!
                        * \b T4 : initialisation WIP1
                        * \arg met le numéro de la tâche à 0, et prend a dans la liste d'EtatObjet (prend un objet qui n'a pas encore été fait)
                        * \arg \b Precondition: M[1] && nb_objets_a_faire != (nb_objets_en_cours+nb_objets_finis)
                        * \arg \b Postcondition: M[2]++
                        */
                M[1]--;
		        nb_objets_en_cours++;
		        n=0;
		        a=prendre_objet(EtatObjet);
				        
                M[2]++;
                display();
            }
        if(M[2] && poste[Job_seqdeposte[a][0]-3]==0)
            {
            /*!
                        * \b T5: initialisation produit et tâche 1 (WIP1)
                        * \arg Ajoute un produit, lance la fabrication sur le premier poste et initialise nb_postes (nombre de tâches à faire)
                        * \arg \b Precondition: M[2] && poste[Job_seqdeposte[a][0]-3]==0
                        * \arg \b Postcondition: M[3]++
                        */
                M[2]--;

		        poste[Job_seqdeposte[a][0]-3]++;
                robot.AjouterProduit(Job_seqdeposte[a][0], Job_type[a]);
                robot.FaireTache(Job_seqdeposte[a][0], Job_dureeparposte[a][0]);
                cout << "duree poste=" << Job_dureeparposte[a][0] << endl;
		        nb_postes = Job_dureeparposte[a].size();
		        
                M[3]++;
                display();
            }
        if((M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes>n+1 && Job_seqdeposte[a][n]!=Job_seqdeposte[a][n+1])||(M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes==n+1 && Job_seqdeposte[a][n]==4))
            {
                /*!
                        * \b T6: Besoin de déplacement (WIP1)
                        * \arg  Pas d'actions effectuées, rentre si besoin de se déplacer entre deux tâches ou si finit les tâches à faire sur le poste 4
                        * \arg \b Precondition: (M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes>n+1 && Job_seqdeposte[a][n]!=Job_seqdeposte[a][n+1])||(M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes==n+1 && Job_seqdeposte[a][n]==4)
                        * \arg \b Postcondition: M[4]++
                        */
                M[3]--;
		
                M[4]++;

                display();
            }	    
	    if((M[4] && poste[Job_seqdeposte[a][n+1]-3]==1 && Job_seqdeposte[a][n+1]==3 && nb_postes>n+1 && M[501]) || (M[4] && poste[0]==1 && nb_postes==n+1 && M[501]))
            {
                /*!
                        * \b T7: Poste suivant non libre (WIP1)
                        * \arg  Pas d'actions effectuées, rentre si le poste suivant est le poste 3 et si la navette est prête
                        * \arg \b Precondition: (M[4] && poste[Job_seqdeposte[a][n+1]-3]==1 && Job_seqdeposte[a][n+1]==3 && nb_postes>n+1 && M[501]) || (M[4] && poste[0]==1 && nb_postes==n+1 && M[501])
                        * \arg \b Postcondition: M[5]++
                        */
                M[4]--;
		
                M[5]++;

                display();
            }	  
	    if((M[4] && poste[Job_seqdeposte[a][n+1]-3]==0 && nb_postes>n+1) || (M[4] && poste[0]==0 && nb_postes==n+1))
            {
                /*!
                        * \b T8: Déplacer produit (WIP1)
                        * \arg  Déplace produit de 3 à 4 ou de 4 à 3 (en fonction de où on est et de où on doit aller) si le poste suivant est libre
                        * \arg \b Precondition: (M[4] && poste[Job_seqdeposte[a][n+1]-3]==0 && nb_postes>n+1) || (M[4] && poste[0]==0 && nb_postes==n+1)
                        * \arg \b Postcondition: M[6]++
                        */
                M[4]--;

                if (Job_seqdeposte[a][n+1]==4 && nb_postes>n+1)  {
                    poste[1]++;
		            robot.DeplacerPiece(ROBOT_2, 1, 4);}
                else if ((Job_seqdeposte[a][n+1]==3 && nb_postes>n+1)||(nb_postes==n+1))  {
                    poste[0]++;
		            robot.DeplacerPiece(ROBOT_2, 4, 1);}
		
                M[6]++;

                display();
            }
	    if((M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes==n+1 && Job_seqdeposte[a][n]==3)||(M[6] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes==n+1)||(M[5] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && N==1 && nb_postes==n+1))
            {
                /*!
                        * \b T9: Evacuer produit (WIP1)
                        * \b T10: Recommencer WIP1 si besoin
                        * \arg  Evacue le produit si toutes les tâches ont été réalisées
                        * \arg \b Precondition: (M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes==n+1 && Job_seqdeposte[a][n]==3)||(M[6] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes==n+1)||(M[5] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && N==1 && nb_postes==n+1)
                        * \arg \b Postcondition: M[900]++; M[1]++;
                        */
                
                if (M[3]) {
                    M[3]--;}
                if (M[6]) {
                    M[6]--;
                    poste[1]--;}
                if (M[5]) {
                	M[5]--;
			        N=0;}
                robot.Evacuer();
                sleep(5);
		        poste[0]--;
		

                M[900]++;
		        M[1]++;
		        nb_objets_en_cours--;
		        nb_objets_finis++;

                display();
            }
	    if((M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes>n+1 && Job_seqdeposte[a][n]==Job_seqdeposte[a][n+1])||(M[6] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes>n+1)||(M[5] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && N==1 && nb_postes>n+1))
            {
                /*!
                        * \b T11: Faire tâche n+1 (WIP1)
                        * \arg  Fais la tâche n+1 et met à jour le numéro de la tâche
                        * \arg \b Precondition: (M[3] && robot.TacheFinie(Job_seqdeposte[a][n]) && nb_postes>n+1 && Job_seqdeposte[a][n]==Job_seqdeposte[a][n+1])||(M[6] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes>n+1)||(M[5] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && N==1 && nb_postes>n+1)
                        * \arg \b Postcondition: M[3]++
                        */
		    
                if (M[3]) {
                	M[3]--;}
		        if (M[6]) {
                	M[6]--;
                    if (Job_seqdeposte[a][n+1]==4)  {
		                poste[0]--;}
                    else if (Job_seqdeposte[a][n+1]==3)  {
		                poste[1]--;}}
		        if (M[5]) {
                	M[5]--;
			        N=0;}
                
                robot.FaireTache(Job_seqdeposte[a][n+1], Job_dureeparposte[a][n+1]);
		
		        n=n+1;
                M[3]++;

                display();
            }
	    












	    if(M[101] && nb_objets_a_faire != (nb_objets_en_cours+nb_objets_finis))
            {
            /*!
                        * \b T12 : initialisation WIP2
                        * \arg met le numéro de la tâche à 0, et prend b dans la liste d'EtatObjet (prend un objet qui n'a pas encore été fait)
                        * \arg \b Precondition: M[101] && nb_objets_a_faire != (nb_objets_en_cours+nb_objets_finis)
                        * \arg \b Postcondition: M[102]++
                        */
                M[101]--;
		        nb_objets_en_cours++;
		        m=0;
		        b=prendre_objet(EtatObjet);
				        
                M[102]++;
                display();
            }
	    if(M[102]&&poste[Job_seqdeposte[b][0]-3]==0)
            {
            /*!
                        * \b T13: initialisation produit et tâche 1 (WIP2)
                        * \arg Ajoute un produit, lance la fabrication sur le premier poste et initialise nb_postes_2 (nombre de tâches à faire)
                        * \arg \b Precondition: M[102]&&poste[Job_seqdeposte[b][0]-3]==0
                        * \arg \b Postcondition: M[103]++
                        */
                M[102]--;

		        poste[Job_seqdeposte[b][0]-3]++;
                robot.AjouterProduit(Job_seqdeposte[b][0], Job_type[b]);
                robot.FaireTache(Job_seqdeposte[b][0], Job_dureeparposte[b][0]);
                cout << "duree poste=" << Job_dureeparposte[b][0] << endl;
		        nb_postes_2 = Job_dureeparposte[b].size();	
		        
                M[103]++;
                display();
            }
        if((M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2>m+1 && Job_seqdeposte[b][m]!=Job_seqdeposte[b][m+1])||(M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2==m+1 && Job_seqdeposte[b][m]==4))
            {
                /*!
                        * \b T14: Besoin de déplacement (WIP2)
                        * \arg  Pas d'actions effectuées, rentre si besoin de se déplacer entre deux tâches ou si finit les tâches à faire sur le poste 4
                        * \arg \b Precondition: (M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2>m+1 && Job_seqdeposte[b][m]!=Job_seqdeposte[b][m+1])||(M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2==m+1 && Job_seqdeposte[b][m]==4)
                        * \arg \b Postcondition: M[104]++
                        */
                M[103]--;
		
                M[104]++;

                display();
            }	    
	    if((M[104] && poste[Job_seqdeposte[b][m+1]-3]==1 && Job_seqdeposte[b][m+1]==3 && nb_postes_2>m+1 && M[501]) || (M[104] && poste[0]==1 && nb_postes_2==m+1 && M[501]))
            {
                /*!
                        * \b T15: Poste suivant non libre (WIP2)
                        * \arg  Pas d'actions effectuées, rentre si le poste suivant est le poste 3 et si la navette est prête
                        * \arg \b Precondition: (M[104] && poste[Job_seqdeposte[b][m+1]-3]==1 && Job_seqdeposte[b][m+1]==3 && nb_postes_2>m+1 && M[501]) || (M[104] && poste[0]==1 && nb_postes_2==m+1 && M[501])
                        * \arg \b Postcondition: M[105]++
                        */
                M[104]--;

                M[105]++;

                display();
            }	  
	    if((M[104] && poste[Job_seqdeposte[b][m+1]-3]==0 && nb_postes_2>m+1) || (M[104] && poste[0]==0 && nb_postes_2==m+1))
            {
                /*!
                        * \b T16: Déplacer produit (WIP2)
                        * \arg  Déplace produit de 3 à 4 ou de 4 à 3 (en fonction de où on est et de où on doit aller) si le poste suivant est libre
                        * \arg \b Precondition: (M[104] && poste[Job_seqdeposte[b][m+1]-3]==0 && nb_postes_2>m+1) || (M[104] && poste[0]==0 && nb_postes_2==m+1)
                        * \arg \b Postcondition: M[106]++
                        */
                M[104]--;

                if (Job_seqdeposte[b][m+1]==4 && nb_postes_2>m+1)  {
                    poste[1]++;
                    robot.DeplacerPiece(ROBOT_2, 1, 4);}
                else if ((Job_seqdeposte[b][m+1]==3 && nb_postes_2>m+1)||(nb_postes_2==m+1))  {
                    poste[0]++;
		            robot.DeplacerPiece(ROBOT_2, 4, 1);}
		
                M[106]++;

                display();
            }
	    if((M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2==m+1 && Job_seqdeposte[b][m]==3)||(M[106] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes_2==m+1)||(M[105] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && P==1 && nb_postes_2==m+1))
            {
                /*!
                        * \b T17: Evacuer produit (WIP2)
                        * \b T18: Recommencer WIP2 si besoin
                        * \arg  Evacue le produit si toutes les tâches ont été réalisées
                        * \arg \b Precondition: (M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2==m+1 && Job_seqdeposte[b][m]==3)||(M[106] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes_2==m+1)||(M[105] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && P==1 && nb_postes_2==m+1)
                        * \arg \b Postcondition: M[901]++; M[101]++;
                        */
                    if (M[103]) {
                        M[103]--;}
                    if (M[106]) {
                        M[106]--;
                        poste[1]--;}
                    if (M[105]) {
                	    M[105]--;
			            P=0;}
            	    robot.Evacuer();
                    sleep(5);
		            poste[0]--;
		

                    M[901]++;
		            M[101]++;
		            nb_objets_en_cours--;
		            nb_objets_finis++;

                    display();
            }
	    if((M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2>m+1 && Job_seqdeposte[b][m]==Job_seqdeposte[b][m+1])||(M[106] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes_2>m+1)||(M[105] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && P==1 && nb_postes_2>m+1))
            {
                /*!
                        * \b T19: Faire tâche m+1 (WIP2)
                        * \arg  Fais la tâche m+1 et met à jour le numéro de la tâche
                        * \arg \b Precondition: (M[103] && robot.TacheFinie(Job_seqdeposte[b][m]) && nb_postes_2>m+1 && Job_seqdeposte[b][m]==Job_seqdeposte[b][m+1])||(M[106] && robot.FinDeplacerPiece(ROBOT_2) && nb_postes_2>m+1)||(M[105] && M[507] && robot.FinDeplacerPiece(ROBOT_2) && P==1 && nb_postes_2>m+1)
                        * \arg \b Postcondition: M[103]++
                        */
		        if (M[103]) {
                	M[103]--;}
		        if (M[106]) {
                	M[106]--;
                    if (Job_seqdeposte[b][m+1]==4)  {
                        poste[0]--;}
                    else if (Job_seqdeposte[b][m+1]==3)  {
		                poste[1]--;}}
		        if (M[105]) {
                	M[105]--;
			        P=0;}
		
                robot.FaireTache(Job_seqdeposte[b][m+1], Job_dureeparposte[b][m+1]);
		
		        m=m+1;
                M[103]++;

                display();               
            }






	    if(M[500] && capteur.get_PS(1))
            {
            /*!
                        * \b T20: Passage sur capteur 1
                        * \arg Pas d'actions
                        * \arg \b Precondition: M[500] && capteur.get_PS(1)
                        * \arg \b Postcondition: M[501]++
                        */
                M[500]--;

                
                M[501]++;
                display();
            }
	    if(M[501] && (M[5]||M[105]))
            {
            /*!
                        * \b T21: Faire redémarrer la navette
                        * \arg Faire redémarrer la navette
                        * \arg \b Precondition: M[501] && (M[5]||M[105])
                        * \arg \b Postcondition: M[502]++
                        */
                M[501]--;
		        if (M[5]){
		            N=1;}
		        if (M[105]){
		            P=1;}

                cmd.Ouvrir_PS(1);
                cmd.Stop_PS(3);
                M[502]++;
                display();
            }
	    if(M[502] && capteur.get_PS(3))
            {
            /*!
                        * \b T22: Déplacer pièce de poste 4 à navette
                        * \arg Déplacer pièce de poste 4 à navette
                        * \arg \b Precondition: M[502] && capteur.get_PS(3)
                        * \arg \b Postcondition: M[503]++
                        */
                M[502]--;

		        robot.DeplacerPiece(ROBOT_2, 4, 3);
		    
                M[503]++;
                display();
            }
	    if(M[503] && robot.FinDeplacerPiece(ROBOT_2))
            {
            /*!
                        * \b T23: Faire redémarrer la navette
                        * \arg Faire redémarrer la navette
                        * \arg \b Precondition: M[503] && robot.FinDeplacerPiece(ROBOT_2)
                        * \arg \b Postcondition: M[504]++
                        */
                M[503]--;
                poste[1]--;
                cmd.Ouvrir_PS(3);
                cmd.Stop_PS(1);

                M[504]++;
                display();
            }
	    if(M[504] && capteur.get_PS(1))
            {
            /*!
                        * \b T24: Passage sur capteur 1
                        * \arg Pas d'actions
                        * \arg \b Precondition: M[504] && capteur.get_PS(1)
                        * \arg \b Postcondition: M[505]++
                        */
                M[504]--;

                M[505]++;
                display();
            }
	    if(M[505] && poste[0]==0)
            {
            /*!
                        * \b T25: Faire redémarrer la navette
                        * \arg Faire redémarrer la navette
                        * \arg \b Precondition: M[505] && poste[0]==0
                        * \arg \b Postcondition: M[506]++
                        */
                M[505]--;

		        poste[0]++;
                cmd.Ouvrir_PS(1);
                cmd.Stop_PS(2);

                M[506]++;
                display();
            }
	    if(M[506] && capteur.get_PS(2))
            {
            /*!
                        * \b T26: Déplacer pièce de navette à poste 3
                        * \arg Déplacer pièce de navette à poste 3
                        * \arg \b Precondition: M[506] && capteur.get_PS(2)
                        * \arg \b Postcondition: M[507]++
                        */
                M[506]--;

                
		        robot.DeplacerPiece(ROBOT_2, 2, 1);

                M[507]++;
                display();
            }
	    if(M[507] && robot.FinDeplacerPiece(ROBOT_2))
            {
            /*!
                        * \b T27: Faire redémarrer la navette
                        * \arg Faire redémarrer la navette
                        * \arg \b Precondition: M[507] && robot.FinDeplacerPiece(ROBOT_2)
                        * \arg \b Postcondition: M[500]++;
                        */
                M[507]--;

                cmd.Ouvrir_PS(2);
                cmd.Stop_PS(1);

                M[500]++;
                display();
            }
	    




	    if(M[900]+M[901]==nb_objets_a_faire)
            {
            /*!
                        * \b T28: Finir programme
                        * \arg Stoppe la navette et met fin au réseau de pétri
                        * \arg \b Precondition: M[900]+M[901]==nb_objets_a_faire
                        * \arg \b Postcondition: M[PlaceFin]++
                        */
                M[900]=0;
		        M[901]=0;
                cmd.Stop_PS(23);
                cmd.Stop_PS(20);
                cmd.Stop_PS(6);
                cmd.Stop_PS(5);
                cmd.Stop_PS(1);
                cmd.Stop_PS(2);
                cmd.Stop_PS(3);

                M[PlaceFin]++;
                display();
            }





             ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //////////////////////////////////// | Place de fin de Petri ETU | //////////////////////////////////////
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            if(M[PlaceFin])
            {
                display();
                cout << endl << BOLDCYAN << " --[PETRI TERMINE]--" << RESET << endl;
                cmd.FinPetri();
                while(rclcpp::ok()) 
                {
                    rclcpp::spin_some(node); 
                    loop_rate.sleep();
                }
            }
        }

        rclcpp::spin_some(node); //permet aux fonction callback de ros dans les objets d'êtres appelées
        loop_rate.sleep(); //permet de synchroniser la boucle while. Il attend le temps qu'il reste pour faire le 25Hz (ou la fréquence indiquée dans le loop_rate)
    }

    return 0;
}
