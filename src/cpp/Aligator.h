/*
 * File:   Aligator.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 13:24 2017
 */

#ifndef ALIGATOR_H
#define	ALIGATOR_H

#include "Faune.h"
#include "Carnivore.h"
#include "Faiblir.h"
#include "Marcher.h"

/**
 Type concret Aligator derive de Faune.
 */
class Aligator : public Faune
{
public:
    /**
     Constructeur.

     Il fait appel au constructeur du type de base Faune pour initialiser les
     attributs herites. Ensuite cree un objet du type concret Carnivore
     derive du type abstrait RegimeAlimentaire a laquelle est delegue le
     comportement alimentaire de l'animal.

     Cree egalement un objet du type concret Faiblir derive du type abstrait
     Evoluable, responsable de gerer le comportement evolutif de l'animal.

     Cree egalement un objet du type concret Marcher derive du type abstrait
     Mobilite, responsable de gerer le comportement mobile de l'animal.

     @param energie
     @param espece
     */
    Aligator(string espece, int energie);

    /**
     Destructeur

     Les classes polymorphique tel Aligator (derivees d'un type de base qui a au
     moins une methode declaree virtual) doivent avoir leurs destructeurs declares
     virtual afin d'eviter tout comportement indefini.
     */
    virtual ~Aligator();

};

#endif /* ALIGATOR_H */
