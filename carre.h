/********
 * Fichier: carre.h
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "coordonnee.h"
#include "rectangle.h"
using namespace std;

class Carre : public Rectangle
{
public:
    Carre();
    Carre(int x1, int y1, int lenghtSide);
    ~Carre();
    void setSide(int side);
    int getSide(void);
    void afficher(ostream & s);
private:
protected:
};

#endif