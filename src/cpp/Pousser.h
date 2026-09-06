/*
 * File:   Pousser.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 13:16 2017
 */

#ifndef POUSSER_H
#define	POUSSER_H

#include "Evoluable.h"
#include "Arbre.h"

/**
 * Type concret Pousser derive de Evoluable.
 */
class Pousser : public Evoluable
{
public:
    /**
     Constructeur.
     */
    Pousser();

    /**
     Implementation de la methode du type de base abstrait Evoluable.

     @param *unObjetJungle
     */
    void evolution(ObjetJungle* unObjetJungle) override;

    /**
     Destructeur
     */
    ~Pousser();
};

#endif /* POUSSER_H */
