/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Lion.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:43 2017
 */

/**
 * Classe concrete Lion sous-classe de Faune.
 */
public class Lion extends Faune{

    /**
     * Constructeur.
     * Il fait appel au constructeur de la superclasse Faune pour initialiser les
     * attributs herites. Ensuite cree une instance de la classe concrete Carnivore
     * implementant l'interface RegimeAlimentaire a laquelle est delegue le
     * comportement alimentaire de l'animal.

     * Cree egalement un objet de la classe concrete Faiblir implementant
     * l'interfac Evoluable, responsable de gerer le comportement evolutif de
     * l'animal.

     * Cree egalement un objet de la classe concrete Marcher implementant
     * l'interface Mobilite, responsable de gerer le comportement mobile de
     * l'animal.
     *
     * @param espece
     * @param energie
     */
    public Lion(String espece, int energie){
        super.Faune(espece, energie);
        this.alimentation = new Carnivore();
        this.evolue = new Faiblir();
        this.mouvement = new Marcher();
    }
}
