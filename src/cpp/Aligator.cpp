/*
 * File:   Aligator.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 13:23 2017
 */

 #include "Aligator.h"

/**
 Implementation du type concret Aligator derive de Faune
 */
Aligator::Aligator(string espece, int energie) : Faune(espece, energie) // Constructeur
{
    /**
     Creation d'un objet du type concret Carnivore, derive du type de base
     abstrait RegimeAlimentaire.
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
 l'instance Aligator.
 */
Aligator::~Aligator() // Destructeur
{
    delete this->alimentation;
    delete this->evolue;
    delete this->mouvement;
}
