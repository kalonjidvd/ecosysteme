/*
 * File:   Ressource.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 13:35 2017
 */

#ifndef RESSOURCE_H
#define	RESSOURCE_H

#include "ObjetsJungle.h"

/**
 Type Ressource derive de ObjetJungle.
 */
class Ressource : public ObjetJungle
{
public:
    /**
     Constructeur.

     Initialise l'attribut prive quantite d'un objet Ressource.

     @param quantite
     */
    Ressource(int quantite);

    /**
     Accesseur en lecture pour l'attribut prive quantite.

     @return quantite
     */
    int getQuantite();

    /**
     Accesseur en ecriture pour l'attribut prive quantite.

     @param quantite
     */
    void setQuantite(int quantite);

    /**
     Decremente la valeur de l'attribut quantite de la valeur passe en parametre.

     @param quantite
     */
    void diminuerDeQuantite(int quantite);

    /**
     Incremente la valeur de l'attribut quantite de la valeur passe en parametre.

     @param quantite
     */
    void augmenterDeQuantite(int quantite);

    /**
     Destructeur
     */
    ~Ressource();

private:
    int quantite;
};

#endif /* RESSOURCE_H */
