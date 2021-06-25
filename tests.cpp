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
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
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
