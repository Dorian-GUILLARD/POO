/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Croix.cpp
********************************************************************************/
#include"Croix.h"

#include<stdio.h>

Croix::Croix(Point P, const int h, const int w): Figure(P,h,w)
{
 image.resize(width * height);

 int PointCentralCroix=(h+1)/2;
 for (int i = 0; i <= width; i++) 
    {
      setPoint(i,PointCentralCroix);
    }
 for (int j = 0; j <= height; j++)
    {
      setPoint(PointCentralCroix,j);
    }
}



