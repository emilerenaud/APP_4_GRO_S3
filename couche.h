/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#include <iostream>
#include "coordonnee.h"
#include "vecteur.h"

#define INIT 0
#define ACTIVE 1
#define INACTIVE 2
#define CACHE 3

class Couche
{
   public:
      Couche();
      bool addForme(Forme* forme);
      Forme* removeForme(int indice);
      Forme* getForme(int indice);
      double aire(void);
      bool translater(int deltaX, int deltaY);
      bool reset(void);
      bool changeEtat(int etat);
      int getEtat(void);
      void afficher(ostream & s);
   private:

   protected:
   int _etat = INIT;
   double _aire;
   Vecteur* _vecteur;

};

#endif
