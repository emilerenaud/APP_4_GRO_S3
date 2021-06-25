/********
 * Fichier: rectangle.h
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "coordonnee.h"
#include "forme.h"

using namespace std;

class Rectangle : public Forme
{
public:
    Rectangle();
    Rectangle(int x1, int y1, int width, int lenght);
    ~Rectangle();
    double aire(void);
    void afficher(ostream & s);
    void setWidth(int width);
    void setLength(int lenght);
    int getWitdh(void);
    int getLength(void);
private:

protected:
    int _width;
    int _height;
};

#endif