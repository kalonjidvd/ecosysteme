/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Marcher.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:41 2017
 */

/**
 * Classe concrete Marcher implementant l'interface Mobilite.
 */
public class Marcher implements Mobilite{

    /**
     * Implementation de la methode abstraite de l'interface Mobilite.
     * La methode toString heritee de la superclasse Objetc de Java et redefinie
     * dans la classe abstraite Faune, sert aà afficher le type dynamique de
     * l'objet qui appelle cette methode.
     *
     * @param laFaune
     */
    public void seMouvoir(Faune laFaune){
        /**
         * La concatenation de laFaune declenche l'appel de la methode toString()
         * pour obtenir le type de l'objet au moment de l'execution.
         */
        System.out.println(laFaune + " : je marche...");
    }

}
