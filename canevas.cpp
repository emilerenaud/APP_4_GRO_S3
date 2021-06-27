/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
   _couches[0].changeEtat(ACTIVE);
   _coucheActive = 0;
   _aire = 0;
   _couches[1].changeEtat(INIT);
   _couches[2].changeEtat(INIT);
   _couches[3].changeEtat(INIT);
   _couches[4].changeEtat(INIT);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   try
   {
      for(int i=0; i<MAX_COUCHES; i++)
      {
         _couches[i].reset();
      }
      _couches[0].changeEtat(ACTIVE);
      _coucheActive = 0;
      return 0;
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
      return 1;
   }
}

bool Canevas::activerCouche(int index)
{
   try
   {
      for(int i = 0; i<MAX_COUCHES; i++)
      {
         if(_couches[i].getEtat() == ACTIVE)
            _couches[i].changeEtat(INACTIVE);
      }
      if(_couches[index].changeEtat(ACTIVE) == 0) // checker si l'index est bonne genre.
      {
         _coucheActive = index;
         return 0;
      }
      else
         return 1;
   
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
      return 1;
   }
   
   
}

bool Canevas::cacherCouche(int index)
{
   if(_couches[index].changeEtat(INACTIVE) == 0) // checker si l'index est bonne genre.
   {
      _coucheActive = -1;
      return 0;
   }
   else
      return 1;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   if(_coucheActive != -1 && _coucheActive <= MAX_COUCHES)
   {
      return _couches[_coucheActive].addForme(p_forme);
   }
   else
      return 1;
}

bool Canevas::retirerForme(int index)
{
   if(_coucheActive != -1 && _coucheActive <= MAX_COUCHES)
   {
      return _couches[_coucheActive].removeForme(index);
   }
   else
      return 1;
}

double Canevas::aire()
{
   for(int i = 0; i<MAX_COUCHES; i++)
   {
      _aire += _couches[i].aire();
   }
   return _aire;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   try
   {
     return _couches[_coucheActive].translater(deltaX,deltaY);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
      return 1;
   }
   

}

void Canevas::afficher(ostream & s)
{
   for(int i = 0; i<MAX_COUCHES; i++)
   {
      _couches[i].afficher(s);
   }
}
