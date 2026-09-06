/*
 * File:   Nager.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 14:06 2017
 */

#ifndef NAGER_H
#define	NAGER_H

#include "Mobilite.h"
#include "Faune.h"
#include <typeinfo>
#include <iostream>

using namespace std;

/**
 * Type concret Nager derive de Mobilite.
 */
class Nager : public Mobilite
{
public:
    /**
     Constructeur.
     */
    Nager();

    /**
     Implementation de la methode du type de base abstrait Mobilite.

     @param *laFaune
     */
    void seMouvoir(Faune* laFaune) override;

	/**
	 Destructeur
	 */
	~Nager();
};

#endif /* NAGER_H */
