/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Pousser.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:38 2017
 */

/**
 * Classe concrete Pousser implementant l'interface Evoluable.
 */
public class Pousser implements Evoluable{

    /**
     * Implementation de la methode abstraite de l'interface Evoluable.
     *
     * @param laPlante
     */
    public void evolution(ObjetJungle laPlante){
        ((Arbre)laPlante).augmenterDeQuantite(20);
    }
}
