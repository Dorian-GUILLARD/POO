/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Drawing.cpp
********************************************************************************/

#include "Drawing.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include<vector>
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"
//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height) {
  image.resize(width * height);
}

Drawing::~Drawing() {}

/* Enregistrement de l'image dans le fichier "filename" */
void Drawing::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

 
  draw();
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Mise à 255 de tous les points de l'image */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++) {
    *it = 255;
  }
}

/* Image test*/
void Drawing::createTestImage() {
}

/*Fonction draw
  Fonctionnement:
  -> Scrute le tableau de figure afin de sélectionner la figure souhaitée
  -> Une fois la figure choisie, récupère les paramètre de celle-ci (longueur, largeur, positionnement et vecteur image)
  -> Pour chaque pixels de la figure, change la valeur du pixel image correspondant
*/

void Drawing::draw(){
int px,py,num_pixel_centre; //coordonnees du placement du centre haut gauche des figures
int j=0;
int larg_figure=0;
int long_figure=0;
int actu;
std::vector<char> imagefigure;
clearImage();

for(auto i=Tableau_objet.begin(); i<Tableau_objet.end();i++)
{
  actu=0;
  larg_figure=0;
  long_figure=0;
  imagefigure=Tableau_objet[j]->GetVector();
  px=Tableau_objet[j]->Placement.getX();
  py=Tableau_objet[j]->Placement.getY();
  if(py==0)py=1;
  if(px==0)px=1;
  num_pixel_centre=((height-py)*width)+(px-1);
  
  for(int k=0; k<(Tabx[j]*Taby[j]); k++)
  {
   actu=num_pixel_centre+(width*long_figure)+larg_figure;
   image[actu]=imagefigure[k];
   if(larg_figure<(Taby[j]-1))
   {
   larg_figure++;
   }else
   {
   larg_figure=0;
   long_figure++;
   }
  }  
  j++;
}

}
