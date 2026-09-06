/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   RegimeAlimentaire.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:39 2017
 */

/**
 * Interface RegimeAlimentaire.
 */
public interface RegimeAlimentaire {

    /**
     * Methode abstraite qui doit etre implementee par les classes concretes
     * implementant cette interface.
     *
     * @param consommateur
     * @param consommable
     */
    public void seNourrir(Faune consommateur, ObjetJungle consommable);
}
