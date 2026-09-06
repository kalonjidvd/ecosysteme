/*
 * File:   PointDEau.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 13:36 2017
 */

#ifndef POINTDEAU_H
#define	POINTDEAU_H

#include "Ressource.h"
#include "Evaporer.h"

/**
 Type concret PointDEau derive de Ressource.
 */
class PointDEau : public Ressource
{
public:

    /**
     Constructeur.

     Il fait appel au constructeur du type de base Ressource pour initialiser
     l'attribut herite quantite.

     Cree egalement un objet du type concret Evaporer derive du type abstrait
     Evoluable, responsable de gerer le comportement evolutif du point d'eau.

     @param quantite
     */
    PointDEau(int quantite);

    /**
     Destructeur

     Les classes polymorphique tel PointDEau (derivees d'un type de base qui a au
     moins une methode declaree virtual) doivent avoir leurs destructeurs declares
     virtual afin d'eviter tout comportement indefini.
     */
    virtual ~PointDEau();

};

#endif /* POINTDEAU_H */
