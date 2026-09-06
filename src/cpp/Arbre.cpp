/*
 * File:   Arbre.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 14:15 2017
 */

/**
 Implementation du type concret Arbre derive de Ressource
 */

#include "Arbre.h"

Arbre::Arbre(string espece, int quantite) : Ressource(quantite) // Constructeur
{
    this->espece = espece;
    this->evolue = new Pousser();
}

/**
 Le destructeur detruit toute les instances des comportements avant de detruire
 l'instance Arbre.
 */
Arbre::~Arbre() // Destructeur
{
    delete this->evolue;
}
