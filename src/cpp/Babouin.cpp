/*
 * File:   Babouin.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 13:21 2017
 */

 #include "Babouin.h"

/**
 Implementation du type concret Babouin derive de Faune
 */
Babouin::Babouin(string espece, int energie) : Faune(espece, energie) // Constructeur
{
    /**
     Creation d'un objet de type Herbivore, derive du type de base abstrait
     RegimeAlimentaire.
     */
    this->alimentation = new Herbivore();

    /**
     Creation d'un objet de type Faiblir, derive du type de base abstrait Evoluable.
     */
    this->evolue = new Faiblir();

    /**
     Creation d'un objet de type Marcher, derive du type de base abstrait Mobilite.
     */
    this->mouvement = new Marcher();
}

/**
 Le destructeur detruit toute les instances des comportements avant de detruire
 l'instance Babouin.
 */
Babouin::~Babouin() // Destructeur
{
    delete this->alimentation;
    delete this->evolue;
    delete this->mouvement;
}
