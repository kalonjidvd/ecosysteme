/*
 * File:   Faune.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 15:36 2017
 */

/**
 Implementation du type Faune
 */

#include "Faune.h"

Faune::Faune(string espece, int energie) // Constructeur
{
    this->espece = espece;
    this->energie = energie;
}

int Faune::getEnergie()
{
    return this->energie;
}

void Faune::setEnergie(int energie)
{
    this->energie = energie;
}

string Faune::getEspece()
{
    return this->espece;
}

void Faune::diminuerDEnergie(int energie)
{
    this->energie -= energie;
}

void Faune::augmenterDEnergie(int energie)
{
    this->energie += energie;
}

void Faune::boire(PointDEau* lePointDEau)
{
    while(this->getEnergie() <= 81)
    {
        if(lePointDEau->getQuantite() > 19)
        {
            lePointDEau->diminuerDeQuantite(20);
            this->augmenterDEnergie(20);
        }
    }
}

void Faune::manger(ObjetJungle* unObjetJungle)
{
    /**
     this passe comme argument fait reference à l'instance meme, qui execute sa
     methode manger responsable du ressourcement de l'animal.
     */
    this->alimentation->seNourrir(this, unObjetJungle);
}

void Faune::seDeplacer()
{
    /**
     this passe comme argument fait reference à l'instance meme, qui execute sa
     méthode seDeplacer(), responsable des mouvements de l'animal.
     */
    this->mouvement->seMouvoir(this);
}

void Faune::setAlimentation(RegimeAlimentaire* alimentation)
{
	this->alimentation = alimentation;
}

void Faune::setMobilite(Mobilite* mouvement)
{
    delete this->mouvement;
	this->mouvement = mouvement;
}

Faune::~Faune(){} // Destructeur
