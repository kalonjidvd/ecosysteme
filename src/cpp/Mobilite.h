/*
 * File:   Mobilite.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 20 15:33 2017
 */

#ifndef MOBILITE_H
#define	MOBILITE_H

// #include "Faune.h"
class Faune;

/**
 Type abstrait Mobilite
 */
class Mobilite
{
public:
	/**
	 Constructeur
	 */
	Mobilite();

    /**
     Methode virtuelle pure qui doit etre implementee par les types derives concrets.

     @param *laFaune
     */
    virtual void seMouvoir(Faune* laFaune) = 0;

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
	virtual ~Mobilite();
};

#endif	/* MOBILITE_H */
