/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Croix.h
********************************************************************************/

#ifndef CROIX_H
#define CROIX_H

#include "Point.h"
#include <string>
#include "Figure.h"
#include <vector>

class Croix:public Figure 
{
public:
     Croix(Point P, const int h, const int w);
       
protected: 
  
private:
int centre_interne;
};

#endif 

