/**
 Implementation du type concret PointDEau de Ressource.
 */

#include "PointDEau.h"

PointDEau::PointDEau(int quantite) : Ressource(quantite) // Constructeur
{
    this->evolue = new Evaporer();
}

/**
 Le destructeur detruit toute les instances des comportements avant de detruire
 l'instance PointDEau.
 */
PointDEau::~PointDEau() // Destructeur
{
    delete this->evolue;
}
