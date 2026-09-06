/**
 Implementation du type Ressource derive de ObjetJungle.
 */

#include "Ressource.h"

Ressource::Ressource(int quantite) // Constructeur
{
    this->quantite = quantite;
}


int Ressource::getQuantite()
{
    return this->quantite;
}


void Ressource::setQuantite(int quantite)
{
    this->quantite = quantite;
}


void Ressource::diminuerDeQuantite(int quantite)
{
    this->quantite -= quantite;
}

void Ressource::augmenterDeQuantite(int quantite)
{
    this->quantite += quantite;
}

Ressource::~Ressource(){} // Destructeur
