/*
 * File:   Lion.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 13:19 2017
 */

/**
 Implementation du concret Lion derive de Faune.
 */

#include "Lion.h"

Lion::Lion(string espece, int energie) : Faune(espece, energie) // Constructeur
{
    /**
     Creation d'un objet de type Carnivore, derive du type abstrait
     RegimeAlimentaire.
     */
    this->alimentation = new Carnivore();

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
 l'instance Lion.
 */
Lion::~Lion() // Destructeur
{
    delete this->alimentation;
    delete this->evolue;
    delete this->mouvement;
}
