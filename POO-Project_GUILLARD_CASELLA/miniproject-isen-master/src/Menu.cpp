#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
#include<vector>
#include"Menu.h"
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"

using namespace std;

void Menu::run(void)

/* Fonctionnement:
  Pour chaque figure que l'on va dessiner, créé un nouvel objet et un nouveau point et les ajoutes à la fin de notre tableau objet.
  Lorsque l'on décide de sauvegarder on utilise la fonction draw et save de la classe drawing
*/

{
Drawing draw(300,300);
int choix=0;
int largeur=0;
int longueur=0;
int RefPositionx=0;
int RefPositiony=0;
int boucle=0;
bool vide;

cout<<endl;
cout<<"#################################################################################"<<endl;
cout<<"2020 P17 MARSEILLE        GUILLARD Dorian - CASELLA Nicolas"                      <<endl;
cout<<"                  PROJET POO - Logiciel de dessin                                "<<endl;
cout<<"                  Dimension de l'image : 300x300"                                 <<endl;
cout<<"#################################################################################"<<endl;
cout<<endl;

do{
        cout<<endl;
        cout<<"---------MENU-------------"<<endl;
        cout<<"Choississez la figure à dessiner et n'oubliez pas de sauvegarder après votre choix:"<<endl;
        cout<<"1 : Carre"<<endl;
        cout<<"2 : Rectangle"<<endl;
        cout<<"3 : Croix"<<endl;
        cout<<"4 : Sauvegarde"<<endl;
        cout<<"5 : Quitter"<<endl;
        cin>>choix;

        switch (choix) 
        {
        case 1:{
        cout<<"Choississez la longueur de coté (max 300):"<<endl;
        cin>>largeur;
        cout<<"! A savoir ! : la position du carré est défini par son sommet supérieur gauche"<<endl;  
        cout<<"-> Choix abscisse du sommet supérieur gauche (max 300) :"<<endl;
        cin>>RefPositionx;
        cout<<"-> Choix ordonnee du sommet supérieur gauche (max 300)"<<endl;
        cin>>RefPositiony;
          if(RefPositionx+largeur>300)
           {
           cout<<"C'est trop grand ! (l'image est de dimension 300x300)"<<endl;
           }
          else
          {
        Point placement(RefPositionx,RefPositiony);
        Carre *carre= new Carre(placement, largeur);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(largeur);
        draw.Tableau_objet.push_back(carre);
        }
        }break;
        
        case 2:{
        cout<<"Choississez la largeur(max 300):"<<endl;
        cin>>largeur;
        cout<<"Choississez la longueur (max 300):"<<endl;
        cin>>longueur;
        cout<<"! A savoir ! : la position du rectangle est défini par son sommet supérieur gauche"<<endl;
        cout<<"-> Choix abscisse du sommet supérieur gauche (max 300) :"<<endl;
        cin>>RefPositionx;
        cout<<"-> Choix ordonnee du sommet supérieur gauche (max 300)"<<endl;
        cin>>RefPositiony;
        if((RefPositionx+largeur>300)||(RefPositiony+longueur>300))
        {cout<<"C'est trop grand ! (l'image est de dimension 300x300)"<<endl;}
        else{
        Point p(RefPositionx,RefPositiony);
        Rectangle *rectangle= new Rectangle(p, largeur,longueur);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(longueur);
        draw.Tableau_objet.push_back(rectangle);
        }
        }break;
 
        case 3:{
        cout<<"! A savoir ! : la longueur de coté de la croix doit etre impair !"<<endl;
        cout<<"Choississez la longueur de coté (impair & max 299):"<<endl;
        cin>>longueur;
        cout<<"! A savoir ! :Une croix occupe la place d'un carré (croix dans un carré)"<<endl;
        cout<<"la position de la croix est défini par le sommet supérieur gauche du carré dans lequel elle est inclue"<<endl;
        cout<<"-> Choix abscisse du sommet supérieur gauche (max 300) :"<<endl;
        cin>>RefPositionx;
        cout<<"-> Choix ordonnee du sommet supérieur gauche (max 300)"<<endl;
        cin>>RefPositiony;
        if((RefPositionx+longueur>100)||(RefPositiony+longueur>100)||(longueur %2==0)||(longueur %2==0))
        {cout<<"C'est trop grand ! (l'image est de dimension 300x300)"<<endl;}
        else{
        Point p(RefPositionx,RefPositiony);
        Croix *croix= new Croix(p,longueur,longueur);
        draw.Tabx.push_back(longueur);
        draw.Taby.push_back(longueur);
        draw.Tableau_objet.push_back(croix);
        }
        }break; 
         
        case 4:
        {
        vide=draw.Tableau_objet.empty();
        if(vide)
         {
        cout<<"Rien à sauvegarder ! Choississez une image :) "<<endl;
         }
        else
         {
        draw.draw();
        draw.save(std::string("test_image.bmp"));
        cout<<"Votre image est prete ! nom : test_image.bmp"<<endl;
         }
        }
        break;
        
        case 5:
        {
        cout<<"######################################################"<<endl;
        cout<<"                         Au revoir ! "                 <<endl;
        cout<<"######### GUILLARD Dorian , CASELLA Nicolas ##########"<<endl;
        cout<<endl;
        boucle=1;
        }
        break;    
        default:
        {
        cout<<"Mauvaise valeur, Faites un choix entre 1 et 5"<<endl;}
        }
    }while(boucle==0);
}

