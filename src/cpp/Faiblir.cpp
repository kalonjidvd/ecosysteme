/*
 * File:   Faiblir.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 13:17 2017
 */

/**
 Implementation du type concret Faiblir de Evoluable.
 */

 #include "Faiblir.h"

Faiblir::Faiblir(){} // Constructeur

void Faiblir::evolution(ObjetJungle* laFaune)
{
    Faune* _laFaune = dynamic_cast<Faune*>(laFaune);
    _laFaune->diminuerDEnergie(20);
}

Faiblir::~Faiblir(){} // Destructeur
