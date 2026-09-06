/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   PointDEau.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:43 2017
 */

/**
 * Classe concrete PointDEau sous-classe de Ressource.
 */
public class PointDEau extends Ressource{

    /**
     * Constructeur.
     * Il fait appel au constructeur de la superclasse Ressource pour initialiser
     * l'attribut herite quantite.

     * Cree egalement un objet de la classe concrete Evaporer imlementant
     * ll'interface Evoluable, responsable de gerer le comportement evolutif du
     * point d'eau.
     *
     * @param quantite
     */
    public PointDEau(int quantite){
        super.Ressource(quantite);
        this.evolue = new Evaporer();
    }
}
