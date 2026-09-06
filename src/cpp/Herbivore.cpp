/*
 * File:   Herbivore.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 16:53 2017
 */

/**
 Implementation du type concret Herbivore de regimeAlimentaire.
 */

#include "Herbivore.h"

Herbivore::Herbivore(){} // Constructeur

void Herbivore::seNourrir(Faune* consommateur, ObjetJungle* consommable)
{
    Ressource* laPlante = dynamic_cast<Ressource*>(consommable);

    while(consommateur->getEnergie() <= 71)
    {
        if(laPlante->getQuantite() > 29)
        {
            laPlante->diminuerDeQuantite(30);
            consommateur->augmenterDEnergie(30);
        }
    }
}

Herbivore::~Herbivore(){} // Destructeur
