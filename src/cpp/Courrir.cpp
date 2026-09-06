/*
 * File:   Courrir.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 16:40 2017
 */

#include "Courrir.h"

/**
 Implementation du type concret Courir de Mobilite.
 */
 
Courir::Courir(){} // Constructeur

void Courir::seMouvoir(Faune* laFaune)
{
    /**
     Pour afficher le type dynamique de l'animal.
     */
    const type_info& t = typeid(*laFaune);
    cout << t.name() << " : je cours..." << endl;
}

Courir::~Courir(){} // Destructeur
