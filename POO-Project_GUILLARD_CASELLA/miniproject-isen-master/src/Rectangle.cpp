/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Rectangle.cpp
********************************************************************************/
#include"Rectangle.h"

#include<stdio.h>

Rectangle::Rectangle(Point P, const int h, const int w):Figure(P,h,w)
{
image.resize(width * height);
for (int j = 0; j < height; j++) 
  {
    for (int i = 0; i < width; i++) 
    {
      image[j * width + i] = 255;
    }
  }
}
