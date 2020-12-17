/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
              Point.cpp
********************************************************************************/
#include "Point.h"
#include <iostream>

//Constructeur
Point::Point(int x, int y):x(x), y(y)
{}

//Destructeur
Point::~Point()
{}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int Newx)
{
    x=Newx;
}

void Point::setY(int Newy)
{
    y=Newy;
}
