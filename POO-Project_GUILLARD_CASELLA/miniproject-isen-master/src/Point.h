/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
              Point.h
********************************************************************************/

#ifndef POINT_H
#define POINT_H

#include <string>
#include <vector>

class Point 
{
    public:
        Point(int x=0, int y=0); 
        ~Point();                
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
    private:
        int x;
        int y;
};
#endif 
