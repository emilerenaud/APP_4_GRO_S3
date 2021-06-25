/********
 * Fichier: cercle.h
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "coordonnee.h"
#include "forme.h"
#include "math.h"

using namespace std;

class Cercle : public Forme
{
public:
    Cercle();
    Cercle(int x1, int y1, int rayon);
    double aire(void);
    void afficher(ostream & s);
    void setRayon(int rayon);
    int getRayon(void);

protected:
    int _rayon;
};

#endif