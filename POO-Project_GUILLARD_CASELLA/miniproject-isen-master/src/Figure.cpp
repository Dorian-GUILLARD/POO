/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Figure.cpp
********************************************************************************/

#include <stdio.h>
#include"Figure.h"

//constructeur
Figure::Figure( Point Placement, const int width, const int height): width(width), height(height),Placement(Placement)
{
  image.resize(width * height);
}

void Figure::setPoint(int l,int h) //met à zero (blanc) un pixel en fonction de ses coordonnees
{
if(l==0)
  {
     image[(height-h)*width+(l)] = 0;
  }
  else
  {
     image[(height-h)*width+(l-1)] = 0;
  }
}

const std::vector<char>& Figure::GetVector() //renvoie le vecteur image
{
return image;
}
Point Figure::GetPlacement() //renvoie le point de placement
{
return Placement;
}

int Figure::GetH() //renvoie la hauteur
{
return height;
}

int Figure::GetW() //renvoie la largeur
{
return width;
}


