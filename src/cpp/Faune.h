/*
 * File:   Faune.h
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on Aug 26 12:28 2016
 * Last modified on Apr 20 13:28 2017
 */

#ifndef FAUNE_H
#define	FAUNE_H

#include "ObjetsJungle.h"
#include "Mobilite.h"
#include "RegimeAlimentaire.h"
#include "PointDEau.h"
#include <string>

using namespace std;

/**
 Type Faune derive du type ObjetJungle.
 L'heritage doit etre declare public pour que le type derive puisse acceder a
 tout les membres du type de base.
 */
class Faune : public ObjetJungle
{
public:

    /**
     Constructeur.
     Initialise les attributs prives d'un objet de type Faune.

     @param energie
     @param espece
     */
    Faune(string espece, int enrgie);

    /**
     Accesseur en lecture pour l'attribut prive energie.

     @return energie
     */
    int getEnergie();

    /**
     Accesseur en écriture pour l'attribut prive energie.

     @param energie
     */
    void setEnergie(int energie);

    /**
     Accesseur en lecture pour l'attribut prive espece.

     @return espece
     */
    string getEspece();

    /**
     Decremente la valeur de l'attribut energie d'un objet de type Faune.

     @param energie
     */
    void diminuerDEnergie(int energie);

    /**
     Incremente la valeur de l'attribut energie d'un objet de type Faune.

     @param energie
     */
    void augmenterDEnergie(int energie);

    /**
     Permet a tout objet de type Faune de s'abreuver

     @param *lePointDEau
     */
    void boire(PointDEau* lePointDEau);

    /**
     Comportement delegue a un objet de type concret Carnivore  ou Herbivore,
     derive du type abstrait RegimeAlimentaire.

     @param *unObjetJungle
     */
    void manger(ObjetJungle* unObjetJungle);

    /**
     Comportement delegue a un objet de type concret Marcher, Courir ou Nager,
     derive du type abstrait Mobilite.
     */
    void seDeplacer();

    /**
     Modification dynamique du comportement alimentaire, delegue a un objet
     de type concret Carnivore ou Herbivore, derive du type abstrait
     RegimeAlimentaire.

     @param *alimentation
     */
    void setAlimentation(RegimeAlimentaire* alimentation);

    /**
     Modification dynamique du comportement mobile, delegue a un objet de
     type concret Marcher, Courir ou Nager, derive du type abstrait Mobilite.

     @param *mouvement
     */
    void setMobilite(Mobilite* mouvement);

    /**
     Destructeur
     */
    ~Faune();

protected:
    RegimeAlimentaire* alimentation;
    Mobilite* mouvement;

private:
    int energie;
    string espece;
};

#endif	/* FAUNE_H */
