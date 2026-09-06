/*
 * File:   Marcher.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 14:05 2017
 */

#ifndef MARCHER_H
#define	MARCHER_H

#include "Mobilite.h"
#include "Faune.h"
#include <typeinfo>
#include <iostream>

using namespace std;

/**
 * Type concret Marcher derive de Mobilite.
 */
class Marcher : public Mobilite
{
public:
    /**
     Constructeur.
     */
    Marcher();

    /**
     Implementation de la methode du type de base abstrait Mobilite.

     @param *laFaune
     */
    void seMouvoir(Faune* laFaune) override;

	/**
	 Destructeur
	 */
	~Marcher();
};

#endif /* MARCHER_H */
