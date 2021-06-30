/********
 * Fichier: carre.cpp
 * Auteurs: Emile Renaud / Maxence
 * Date: 22 juin 2021 (creation)  
********/

#include "carre.h"

Carre::Carre()
{
    ancrage.x = 0;
    ancrage.y = 0;
    _width = _height = 1;
}


Carre::Carre(int x1, int y1, int lenghtSide)
{
    ancrage.x = x1;
    ancrage.y = y1;
    _width = _height = lenghtSide;
}

Carre::~Carre()
{

}

void Carre::setSide(int side)
{
    _width = _height = side;
}

int Carre::getSide()
{
    if(_width == _height)
    {
        return _width;
    }
    else
    {
        return -1;
    }
}
void  Carre::afficher(ostream & s)
{
    s << "Carre (";
    s << "x=" << ancrage.x << ", y=" << ancrage.y;
    s << ", c=" << _width;
    s << ", aire=" << aire() << ")\n";
}