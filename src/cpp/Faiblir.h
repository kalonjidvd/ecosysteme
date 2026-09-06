/*
 * File:   Faiblir.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 13:47 2017
 */

#ifndef FAIBLIR_H
#define	FAIBLIR_H

#include "Evoluable.h"
#include "Faune.h"

/**
 * Type concret Faiblir derive de Evoluable.
 */
class Faiblir : public Evoluable
{
public:
    /**
     Constructeur.
     */
    Faiblir();

    /**
     Implementation de la methode du type de base abstrait Evoluable.

     @param *unObjetJungle
     */
    void evolution(ObjetJungle* unObjetJungle) override;

    /**
     Destructeur
     */
    ~Faiblir();
};

#endif /* FAIBLIR_H */
