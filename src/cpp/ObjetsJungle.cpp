/*
 * File:   ObjetsJungle.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 15:25 2017
 */

/**
 Implementation du type ObjetJungle.
 */

 #include "ObjetsJungle.h"

ObjetJungle::ObjetJungle(){} // Constructeur

void ObjetJungle::evoluer()
{
    this->evolue->evolution(this); // this fais reference à l'objet lui-meme.
}

ObjetJungle::~ObjetJungle(){} // Destructeur
