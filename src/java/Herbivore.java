/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Herbivore.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:41 2017
 */

/**
 * Classe concrete Herbivore implementant l'interface RegimeAlimentaire.
 */
public class Herbivore implements RegimeAlimentaire{

    /**
     * Implementation de la methode abstraite de l'interface RegimeAlimentaire.
     *
     * @param consommateur
     * @param laPlante
     */
    public void seNourrir(Faune consommateur, ObjetJungle laPlante){
        while(consommateur.getEnergie() <= 71)
        {
            if(((Arbre)laPlante).getQuantite() > 29)
            {
                ((Arbre)laPlante).diminuerDeQuantite(30);
                consommateur.augmenterDEnergie(30);
            }
        }
    }
}
