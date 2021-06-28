/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche()
{
    _etat = INIT;
    _aire = 0;
    _vecteur = new Vecteur(1);

}

bool Couche::addForme(Forme* forme)
{
    if(_etat == ACTIVE)
        return _vecteur->addForme(forme);
    else
        return 1;
}

Forme* Couche::removeForme(int indice)
{
    if(_etat == ACTIVE)
        return _vecteur->deleteForme(indice);
    else
        return NULL;
}

Forme* Couche::getForme(int indice)
{
    return _vecteur->getForme(indice);
}

double Couche::aire(void)
{
    if(_etat == CACHE)
        return 0; // Aire = 0 si l'etat est cache.
    _aire = 0;
    for(int i = 0; i<_vecteur->getIndice(); i++)
    {
        Forme* forme = getForme(i);
        _aire += forme->aire();
    }
    return _aire;
}

bool Couche::translater(int deltaX, int deltaY)
{
    if(_etat != ACTIVE) // Ne rien faire si la couche n'est pas active
        return 1;
    try
    {
        for(int i = 0; i<_vecteur->getIndice(); i++)
        {
            Forme* forme = getForme(i);
            forme->translater(deltaX,deltaY);
        }
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}

bool Couche::reset(void)
{
    try
    {
        _etat = INIT;
        _aire = 0;
        _vecteur->clearVecteur();
        delete _vecteur;
        _vecteur = new Vecteur(1);
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}

bool Couche::changeEtat(int etat)
{
    if(etat != INIT)
    {
        _etat = etat;
        if(_etat == CACHE)
            _aire = 0;
        return 0;
    }
    else
    {
        return 1;
    }
}
    
int Couche::getEtat()
{
    return _etat;
}

void Couche::afficher(ostream & s)
{
    if(_etat == CACHE)
    {
        s << "Couche cachee\n";
    }
    else if(_etat == INIT)
    {
        s << "Couche initialisee\n";
    }
    else if(_vecteur->isVecteurVide() == 1)
    {
        s << "Couche vide\n";
    }
    else
    {
        _vecteur->afficher(s);
    }

}

