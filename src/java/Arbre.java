/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Arbre.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:43 2017
 */

/**
 * Classe concrete Arbre sous-classe de Ressource.
 */
public class Arbre extends Ressource{

    private final String espece;

    /**
     * Constructeur.
     * Il fait appel au constructeur de la superclasse Ressource pour initialiser
     * l'attribut herite quantite. Et l'attribut prive espece de l'Arbre.

     * Cree egalement un objet de la classe concrete Pousser implementant
     * l'interface Evoluable, responsable de gerer le comportement evolutif de
     * l'arbre.
     *
     * @param espece
     * @param quantite
     */
    public Arbre(String espece, int quantite){
        super.Ressource(quantite);
        this.espece = espece;
        this.evolue = new Pousser();
    }

    /**
     * Accesseur en lecture de l'attribut prive espece.
     *
     * @return espece
     */
    public String getEspece(){
        return this.espece;
    }
}
