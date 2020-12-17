/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Figure.h
********************************************************************************/#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Figure {
public:
    const std::vector<char>& GetVector(); 
    Point GetPlacement();  
    int GetH();
    int GetW();
    Point Placement;

protected: 
  Figure(Point Placement, const int width, const int height);
  void setPoint(int l, int h);
  const int width;
  const int height;
  std::vector<char> image;

};

#endif /* FIGURE_H */
