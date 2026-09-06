/*
 * File:   Marcher.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 16:39 2017
 */

#include "Marcher.h"

/**
 Implementation du type concret Marcher de Mobilite.
 */
 
Marcher::Marcher(){} // Constructeur

void Marcher::seMouvoir(Faune* laFaune)
{
    /**
     Pour afficher le type dynamique de l'animal.
     */
    const type_info& t = typeid(*laFaune);
    cout << t.name() << " : je marche..." << endl;
}

Marcher::~Marcher(){} // Destructeur
