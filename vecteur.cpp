/********
 * Fichier: vecteur.cpp
 * Auteurs: Emile Renaud
 * Date: 22 juin 2021 (creation)
 * Description: 
 *    
 *    
********/

#include "vecteur.h"

Vecteur::Vecteur(int capacite)
{
    _indice = 0;
    _capacite = capacite;
    _tableau = new Forme*[_capacite];
    // clear tableau
    for(int i = 0; i<_capacite; i++)
    {
        _tableau[i] = 0;
    }
}
    
Vecteur::~Vecteur()
{
    delete _tableau;
}

    
int Vecteur::getCapacite(void)
{
    return _capacite;
}
    
int Vecteur::getIndice(void)
{
    return _indice; 
}

void Vecteur::clearVecteur(void)
{
    for(int i = 0; i<_capacite; i++)
    {
        _tableau[i]->~Forme();
        _tableau[i] = 0;
    }
}
    
bool Vecteur::vecteurVide(void)
{
    if(_indice == 0)
        return 1;
    else
        return 0;
}
    
bool Vecteur::addForme(Forme *forme)
{
    if(_indice > _capacite)
    {
        Forme** tableau2 = new Forme*[_capacite * 2];
        for(int i = 0; i < _capacite; i++)
        {
            tableau2[i] = _tableau[i];
        }
        delete _tableau;
        _tableau = tableau2;
        _capacite = _capacite * 2;
    }
    try
    {
        _tableau[_indice] = forme;
        _indice ++;
        std::cout << "forme added" << std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Error addForme \n";
        return 1;
    }
}

    
Forme* Vecteur::deleteForme(int indice)
{
    if(indice < 0 || indice > _capacite)
        return NULL;
    Forme* pObjet = _tableau[indice];  // stocker l'adresse de l'objet
    try
    {
        for(int i = indice; i<_capacite; i++)
        {
            _tableau[i] = _tableau[i+1];
        }
        _tableau[+indice] = 0; // reset the last element. shifting.
        _indice --;
        std::cout << "forme removed from Vecteur" << std::endl;
        return pObjet;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "error deleteForme \n" ;
        return NULL;
    }
}

Forme* Vecteur::getForme(int indice)
{
    if(indice < 0 || indice > _capacite)
        return NULL;
    try
    {
        return _tableau[indice];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return NULL;
    }
    
}

void Vecteur::afficher(ostream & s)
{
    for(int i = 0; i<_capacite; i++)
    {
        _tableau[i]->afficher(s);
    }
}



