/********
 * Fichier: rectangle.cpp
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#include "rectangle.h"

Rectangle::Rectangle()
{
    ancrage.x = 0;
    ancrage.y = 0;
    _width = 1;
    _height = 1;
    // findCorner();
}

Rectangle::Rectangle(int x1, int y1, int width, int height)
{
    ancrage.x = x1;
    ancrage.y = y1;
    _width = width;
    _height = height;
    // findCorner();
}

// void Rectangle::findCorner()
// {
//     _p1 = _ancrage;
//     _p2.x = _ancrage.x + _width;
//     _p2.y = _ancrage.y;
//     _p3.x = _ancrage.x + _width;
//     _p3.y = _ancrage.y + _height;
//     _p4.x = _ancrage.x;
//     _p4.y = _ancrage.y + _height;
// }

double Rectangle::aire()
{
    return _width * _height;
}

void Rectangle::afficher(ostream & s)
{

}

void Rectangle::setWidth(int width)
{
    _width = width;
}

void Rectangle::setLength(int height)
{
    _height = height;
}

int Rectangle::getWitdh(void)
{
    return _width;
}

int Rectangle::getLength(void)
{
    return _height;
}
