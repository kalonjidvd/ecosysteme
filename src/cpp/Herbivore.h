/*
 * File:   Herbivore.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 14:35 2017
 */

#ifndef HERBIVORE_H
#define	HERBIVORE_H

#include "RegimeAlimentaire.h"
#include "Faune.h"

/**
 Type concret Herbivore derive de RegimeAlimentaire.
 */
class Herbivore : public RegimeAlimentaire
{
public:
    /**
     Constructeur.
     */
    Herbivore();

    /**
     Implementation de la methode du type de base abstrait RegimeAlimentaire.

     @param *consommateur
     @param *consommable
     */
    void seNourrir(Faune* consommateur, ObjetJungle* consommable) override;

    /**
     Destructeur
     */
    ~Herbivore();
};

#endif /* HERBIVORE_H */
