/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Faiblir.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:38 2017
 */

/**
 * Classe concrete Faiblir implementant l'interface Evoluable.
 */
public class Faiblir implements Evoluable{

    /**
     * Implementation de la methode abstraite de l'interface Evoluable.
     *
     * @param laFaune
     */
    public void evolution(ObjetJungle laFaune){
        ((Faune)laFaune).diminuerDEnergie(20);
    }
}
