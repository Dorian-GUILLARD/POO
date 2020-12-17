/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Carre.h
********************************************************************************/
#ifndef CARRE_H
#define CARRE_H

#include "Point.h"
#include <string>
#include "Figure.h"
#include <vector>

class Carre:public Figure 
{
public:
     Carre(Point P, const int h);
       
protected: 
  
private:
int largeur;
};

#endif
