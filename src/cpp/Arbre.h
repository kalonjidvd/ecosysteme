/*
 * File:   Arbre.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 13:36 2017
 */

#ifndef ARBRE_H
#define	ARBRE_H

#include "Ressource.h"
#include "Pousser.h" // Pour que le compilateur connaisse le type a l'execution
#include <string>

using namespace std;

/**
 Type concret Arbre derive de Ressource.
 */
class Arbre : public Ressource
{
public:

    /**
     Constructeur.

     Il fait appel au constructeur du type de base Ressource pour initialiser
     l'attribut herite quantite. Et l'attribut prive espece de l'Arbre.

     Cree egalement un objet du type concret Pousser derive du type abstrait
     Evoluable, responsable de gerer le comportement evolutif de l'arbre.

     @param espece
     @param quantite
     */
    Arbre(string espece, int quantite);

    /**
     Accesseur en lecture pour l'attribut prive espece.

     @return espece
     */
    string getEspece();

    /**
     Destructeur

     Les classes polymorphique tel Arbre (derivees d'un type de base qui a au
     moins une methode declaree virtual) doivent avoir leurs destructeurs declares
     virtual afin d'eviter tout comportement indefini.
     */
    virtual ~Arbre();

private:
    string espece;
};

#endif /* ARBRE_H */
