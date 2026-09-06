/*
 * File:   Evaporer.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 13:17 2017
 */

/**
 Implementation du type concret Evaporer de Evoluable.
 */

#include "Evaporer.h"

Evaporer::Evaporer(){} // Constructeur

void Evaporer::evolution(ObjetJungle* lePointDEau)
{
    PointDEau* _lePointDEau = dynamic_cast<PointDEau*>(lePointDEau);
    _lePointDEau->diminuerDeQuantite(20);
}

Evaporer::~Evaporer(){} // Destructeur
