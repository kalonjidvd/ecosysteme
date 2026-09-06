/*
 * File:   Pousser.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 13:16 2017
 */

/**
 Implementation du type concret Pousser de Evoluable.
 */

#include "Pousser.h"

Pousser::Pousser(){} // Constructeur

void Pousser::evolution(ObjetJungle* laPlante)
{
    Arbre* _laPlante = dynamic_cast<Arbre*>(laPlante);
    _laPlante->augmenterDeQuantite(20);
}

Pousser::~Pousser(){} // Destructeur
