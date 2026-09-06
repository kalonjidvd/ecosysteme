/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Carnivore.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:40 2017
 */

/**
 * Classe concrete Carinivore implementant l'interface RegimeAlimentaire.
 */
public class Carnivore implements RegimeAlimentaire{

    /**
     * Implementation de la methode abstraite de l'interface RegimeAlimentaire.
     *
     * @param consommateur
     * @param consommable
     */
    public void seNourrir(Faune consommateur, ObjetJungle consommable){
        if(consommateur.getEnergie() != 0)
        {
            consommateur.augmenterDEnergie(((Faune)consommable).getEnergie());
            ((Faune)consommable).setEnergie(0);
        }
    }
}
