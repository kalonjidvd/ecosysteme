/*
 * File:   Carnivore.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 16:52 2017
 */

/**
 Implementation du type concret Carnivore de regimeAlimentaire.
 */

#include "Carnivore.h"

Carnivore::Carnivore(){} // Constructeur

void Carnivore::seNourrir(Faune* consommateur, ObjetJungle* consommable)
{
    Faune* laProie = dynamic_cast<Faune*>(consommable);

    if(consommateur->getEnergie() != 0)
    {
        consommateur->augmenterDEnergie(laProie->getEnergie());
        laProie->setEnergie(0);
    }
}

Carnivore::~Carnivore(){} // Destructeur
