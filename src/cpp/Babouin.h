/*
 * File:   Babouin.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 21 13:24 2017
 */

#ifndef BABOUIN_H
#define	BABOUIN_H

#include "Faune.h"
#include "Herbivore.h"
#include "Faiblir.h"
#include "Marcher.h"

/**
 Type concret Babouin derive de Faune.
 */
class Babouin : public Faune
{
public:
    /**
     Constructeur.

     Il fait appel au constructeur du type de base Faune pour initialiser les
     attributs herites. Ensuite cree une instance du type concret Herbivore
     derive du type abstrait RegimeAlimentaire a laquelle est delegue le
     comportement alimentaire de l'animal.

     Cree egalement un objet du type concret Faiblir derive du type abstrait
     Evoluable, responsable de gerer le comportement evolutif de l'animal.

     Cree egalement un objet du type concret Marcher derive du type abstrait
     Mobilite, responsable de gerer le comportement mobile de l'animal.

     @param energie
     @param espece
     */
    Babouin(string espece, int energie);

    /**
     Destructeur

     Les classes polymorphique tel Babouin (derivees d'un type de base qui a au
     moins une methode declaree virtual) doivent avoir leurs destructeurs declares
     virtual afin d'eviter tout comportement indefini.
     */
    virtual ~Babouin();

};

#endif	/* BABOUIN_H */
