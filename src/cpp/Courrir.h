/*
 * File:   Courrir.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 13:49
 * Last modified on Apr 21 14:06 2017
 */

#ifndef COURRIR_H
#define	COURRIR_H

#include "Mobilite.h"
#include "Faune.h"
#include <typeinfo>
#include <iostream>

using namespace std;

/**
 * Type concret Courir derive de Mobilite.
 */
class Courir : public Mobilite
{
public:
    /**
     Constructeur
     */
    Courir();

    /**
     Implementation de la methode du type de base abstrait Mobilite.

     @param *laFaune
     */
    void seMouvoir(Faune* laFaune) override;

	/**
	 Destructeur
	 */
	~Courir();
};

#endif /* COURRIR_H */
