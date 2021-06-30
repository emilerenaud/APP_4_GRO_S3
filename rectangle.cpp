/********
 * Fichier: rectangle.cpp
 * Auteurs: Emile Renaud / Maxence
 * Date: 22 juin 2021 (creation)  
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

Rectangle::~Rectangle()
{
}


double Rectangle::aire()
{
    return _width * _height;
}

void Rectangle::afficher(ostream & s)
{
    s << "Rectangle (";
    s << "x=" << ancrage.x << ", y=" << ancrage.y;
    s << ", l=" << _width << ", h=" << _height;
    s << ", aire=" << aire() << ")\n";
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
