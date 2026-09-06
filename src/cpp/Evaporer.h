/*
 * File:   Evaporer.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 13:18 2017
 */

#ifndef EVAPORER_H
#define	EVAPORER_H

#include "Evoluable.h"
#include "PointDEau.h"

/**
 * Type Evaporer derive de Evoluable.
 */
class Evaporer : public Evoluable
{
public:
    /**
     Constructeur.
     */
    Evaporer();

    /**
     Implementation de la methode du type de base abstrait Evoluable.

     @param *unObjetJungle
     */
    void evolution(ObjetJungle* unObjetJungle) override;

    /**
     Destructeur
     */
    ~Evaporer();
};

#endif /* EVAPORER_H */
