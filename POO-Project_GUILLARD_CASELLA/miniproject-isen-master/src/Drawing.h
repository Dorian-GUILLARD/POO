/*******************************************************************************
ISEN P17 Projet-POO GUILARD Dorian , CASELLA Nicolas 
               Drawing.h
********************************************************************************/
#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Point.h"
#include "Figure.h"
#include "Carre.h"
#include "Croix.h"


class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);
  void draw();
  std::vector<Figure*> Tableau_objet;
  std::vector<int> Tabx;
  std::vector<int>Taby;

private:

  void clearImage();
  void createTestImage();

protected:

  const int width;
  const int height;
  std::vector<char> image;
};

#endif 
