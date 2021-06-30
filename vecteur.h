/********
 * Fichier: vecteur.h
 * Auteurs: Emile Renaud / MAxence
 * Date: 22 juin 2021 (creation)  
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "coordonnee.h"
#include "forme.h"

using namespace std;

class Vecteur
{
public:
    Vecteur(int capacite);
    ~Vecteur();
    int getCapacite(void);
    int getIndice(void);
    void clearVecteur(void);
    bool isVecteurVide(void);
    bool addForme(Forme *forme);
    Forme* deleteForme(int indice);
    Forme* getForme(int indice);
    void afficher(ostream & s);
    
    
private:
    Forme** _tableau;
    int _capacite;
    int _indice;
};

#endif