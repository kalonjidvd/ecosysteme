/*
 * File:   Carnivore.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 14:34 2017
 */

#ifndef CARNIVORE_H
#define	CARNIVORE_H

#include "RegimeAlimentaire.h"
#include "Faune.h"

/**
 Type concret Carinivore derive de RegimeAlimentaire.
 */
class Carnivore : public RegimeAlimentaire
{
public:
    /**
     Constructeur.
     */
    Carnivore();

    /**
     Implementation de la methode du type de base abstrait RegimeAlimentaire.

     @param *consommateur
     @param *consommable
     */
    void seNourrir(Faune* consommateur, ObjetJungle* consommable) override;

    /**
     Destructeur
     */
    ~Carnivore();
};

#endif /* CARNIVORE_H */
