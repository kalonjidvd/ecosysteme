/*
 * File:   Evoluable.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 13:47 2017
 */

#ifndef EVOLUABLE_H
#define	EVOLUABLE_H

class ObjetJungle;

/**
 * Type abstrait Evoluable.
 */
class Evoluable
{
public:
    /**
     Constructeur.
     */
    Evoluable();

    /**
     Methode virtuelle pure qui doit etre implementee par les types derives concrets.

     @param *unObjetJungle
     */
    virtual void evolution(ObjetJungle* unObjetJungle) = 0;

    /**
     Destructeur.

     Le destructeur d'un type de base abstrait doit etre declare virtuel afin
     d'eviter un  comportement indefini. Cela our permetre aux types derives de
     definir un comportement associe a chacun d'eux lors de leur destruction.
     */
    virtual ~Evoluable();
};

#endif	/* EVOLUABLE_H */
