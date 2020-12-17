/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Carre.cpp
********************************************************************************/
#include"Carre.h"

#include<stdio.h>

/*contructeur
met en noir (255) tous les pixels du carré */

Carre::Carre(Point P, const int h):Figure(P,h,h)
{
image.resize(width * height);

for (int j = 0; j < width; j++) 
{
    for (int i = 0; i < width; i++) 
    {
      image[j*width+i]=0;
    }
  }
}
