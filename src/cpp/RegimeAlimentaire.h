/*
 * File:   RegimeAlimentaire.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 14:33 2017
 */

#ifndef REGIMEALIMENTAIRE_H
#define	REGIMEALIMENTAIRE_H

#include "ObjetsJungle.h"
#include "Ressource.h"

class Faune;

/**
 Type abstrait RegimeAlimentaire.
 */
class RegimeAlimentaire
{
public:
    /**
     Constructeur
     */
     RegimeAlimentaire();

    /**
     Methode virtuelle pure qui doit etre implementee par les types derives concrets.

     @param consommateur
     @param consommable
     */
    virtual void seNourrir(Faune* consommateur, ObjetJungle* consommable) = 0;

    /**
     Destructeur.

     Le destructeur d'un type de base abstrait doit etre declare virtuel afin
     d'eviter un  comportement indefini. Cela pour permetre aux types derives de
     definir un comportement associe a chacun d'eux lors de leur destruction.
     Parce que lorsque les instances des types derives concrets des comportements
     RegimeAlimentaire, Mobilite et Evoluable des Faunes et des Ressource seront
     crees, elles le seront avec le type statique des types de base. Ainsi, Lors
     de leur destruction ce sera leur propre destructeurs qui seront appeles et
     non ceux des types de base.
     */
     virtual ~RegimeAlimentaire();
};

#endif	/* REGIMEALIMENTAIRE_H */
