/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
   cout << "Test unitaire forme" << endl;
   // Rectangle
   Rectangle rect(0,0,1,2);
   cout << "Origine Rectangle (0,0) = x: " << rect.getAncrage().x << " , y: " << rect.getAncrage().y << endl;
   rect.translater(1,2);
   cout << "Nouvelle origine (1,2) = x: " << rect.getAncrage().x << " , y: " << rect.getAncrage().y << endl;
   cout << "Dimension Rectangle (1,2) = width: " << rect.getWitdh() << " , lenght: " << rect.getLength() << endl;
   cout << "Aire Rectangle (2) = " << rect.aire() << endl;
   rect.setWidth(2);
   rect.setLength(4);
   cout << "Nouvelle dimension (2,4) = width: " << rect.getWitdh() << " , lenght: " << rect.getLength() << endl;
   cout << "Nouvelle aire (8)  = " << rect.aire() << endl;
   // rect.~Rectangle();

   // Carré
   Carre carre(0,0,1);
   cout << "Origine Carre (0,0) = x: " << carre.getAncrage().x << " , y: " << carre.getAncrage().y << endl;
   rect.translater(1,2);
   cout << "Nouvelle origine (1,2) = x: " << carre.getAncrage().x << " , y: " << carre.getAncrage().y << endl;
   cout << "Dimension Carre (1) = side: " << carre.getSide() << endl;
   cout << "Aire Carre (1) = " << carre.aire() << endl;
   carre.setSide(2);
   cout << "Nouvelle Carre (2) = side: " << carre.getSide() << endl;
   cout << "Nouvelle aire (4)  = " << carre.aire() << endl;
   // carre.~Carre();
   
   // Cercle
   Cercle cercle(0,0,1);
   cout << "Origine Cercle (0,0) = x: " << cercle.getAncrage().x << " , y: " << cercle.getAncrage().y << endl;
   cercle.translater(1,2);
   cout << "Nouvelle origine (1,2) = x: " << cercle.getAncrage().x << " , y: " << cercle.getAncrage().y << endl;
   cout << "Dimension Cercle (1) = rayon: " << cercle.getRayon() << endl;
   cout << "Aire Cercle (1) = " << cercle.aire() << endl;
   cercle.setRayon(2);
   cout << "Nouveau rayon (2) = side: " << cercle.getRayon() << endl;
   cout << "Nouvelle aire (4)  = " << cercle.aire() << endl;
   
   // Tests sur les formes geometriques
}

void Tests::tests_unitaires_vecteur()
{
   Vecteur vecteur(1);
   cout << "Capacite vecteur(1) : " << vecteur.getCapacite() << endl;
   cout << "Indice vecteur(0) : " << vecteur.getIndice() << endl;
   Forme *pCarre;
   pCarre = new Carre(1,1,1);
   vecteur.addForme(pCarre);
   cout << "Indice vecteur(1) : " << vecteur.getIndice() << endl;
   cout << "Aire forme 0(1) : " << vecteur.getForme(0)->aire() << endl;
   Forme *pRect = new Rectangle(0,0,1,2);
   vecteur.addForme(pRect);
   cout << "capacite vecteur(2) : " << vecteur.getCapacite() << endl;
   cout << "Indice vecteur(2) : " << vecteur.getIndice() << endl;
   vecteur.afficher(cout);

   // Forme *pDeleteObject = vecteur.deleteForme(0);
   cout << "Indice vecteur(1) : " << vecteur.getIndice() << endl;
   cout << "Aire forme 0(2) : " << vecteur.getForme(0)->aire() << endl;
   vecteur.clearVecteur();
   cout << "Indice fok(0) : " << vecteur.getIndice() << endl;
   if(vecteur.isVecteurVide() == 1)
   {
      cout << "vecteur vide" << endl;
   }
   cout << "fok" <<endl;
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
   Couche couche;
   Forme *pRect = new Rectangle(0,0,2,1);
   Forme *pCarre = new Carre(1,1,1);
   Forme *pCarre2 = new Carre(1,1,1);
   Forme *pCercle = new Cercle(5,5,1);
   double aireTest = pRect->aire() + pCarre->aire() + pCercle->aire();
   cout << "Aire avec les methodes internes = " << aireTest << endl;
   if(couche.addForme(pRect) == 1)
   {
      cout << "impossible de mettre la forme, l'etat de la couche n'est pas bonne" << endl;
   }
   couche.changeEtat(ACTIVE);
   couche.addForme(pRect);
   couche.addForme(pCarre);
   // couche.addForme(pCarre2);
   // couche.addForme(pCercle);
   cout << "Aire avec la couche = " << couche.aire() << endl;
   // couche.translater(1,1);
   // cout << "Origine Cercle (6,6) = x: " << pCercle->getAncrage().x << " , y: " << pCercle->getAncrage().y << endl;
   // cout << "etat couche = " << couche.getEtat() << endl;
   // couche.changeEtat(INACTIVE);
   // cout << "etat couche = " << couche.getEtat() << endl;
   // couche.changeEtat(ACTIVE);
   couche.afficher(cout);
   couche.removeForme(1);
   cout << "Aire avec la couche - le carre = " << couche.aire() << endl;
   couche.afficher(cout);
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
