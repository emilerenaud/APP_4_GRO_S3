/********
 * Fichier: cercle.cpp
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#include "cercle.h"


Cercle::Cercle()
{
    ancrage.x = 0;
    ancrage.y = 0;
    _rayon = 1;
}

Cercle::Cercle(int x1, int y1, int rayon)
{
    ancrage.x = x1;
    ancrage.y = y1;
    _rayon = rayon;
}

double Cercle::aire(void)
{
    return 2*M_PI*pow(_rayon,2);
}

void Cercle::afficher(ostream & s)
{

}
    
void Cercle::setRayon(int rayon)
{
    _rayon = rayon;
}

int Cercle::getRayon(void)
{
    return _rayon;
}