/*
 * File:   ObjetsJungle.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 13:29 2017
 */

#ifndef OBJETS_H
#define	OBJETS_H

/**
 Utilisation des declaration des classes pour eviter le probleme d'inclusion
 circulaire avec les fichiers d'en-tete.
 */
 
#include "Evoluable.h"

/**
 Type de base ObjetJungle.
 Par convention, tout type de base ne doit pas donner naissance a des objets.
 */
class ObjetJungle
{
public:
    /**
     Constructeur.
     */
    ObjetJungle();

   /**
    Les objets des types concrets Faiblir, Pousser et Evaporer derives du type
    abstrait RegimeAlimentaire et responsable de l'evolution des objets ObjetsJungle
    seront instanciees au niveau du constructeur des types concret Lion, Arbre, ...
    derives des types Faune et Ressource.

    Le type de base ObjetJungle doit etre declare polymorphique par le mot-cle
    virtual dans la signature de sa methode evoluer() pour que le downcasting
    soit possible dans l'implementation de la methode
    seNourrir(Faune* consommateur, ObjetJungle* consommable) des types concrets
    Carnivore et Herbivore; derive du type abstrait RegimeAlimentaire.
    */
    virtual void evoluer();

    /**
     Constructeur
     */
    virtual ~ObjetJungle();

protected:
    /**
     Tous les referents types des types concrets implementant les comportements
     des objets de l'application doivent avoir un niveau d'encapsulation protege
     dans la declaretion des types de base pour etre accessible lors de
     l'instanciation des types concrets derives : Lion, Arbre, etc.
     */
    Evoluable* evolue;
};

#endif	/* OBJETS_H */
