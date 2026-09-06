/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Ressource.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:42 2017
 */

/**
 * Classe abstraite Ressource sous-classe de ObjetJungle.
 */
public abstract class Ressource extends ObjetJungle{

    private int quantite;

    /**
     * Constructeur.
     * Initialise l'attribut prive quantite.
     *
     * @param quantite
     */
    public void Ressource(int quantite){
        this.quantite = quantite;
    }

    /**
     * Accesseur en lecture pour l'attribut prive quantite.
     *
     * @return quantite
     */
    public int getQuantite(){
        return this.quantite;
    }

    /**
     * Accesseur en ecriture pour l'attribut prive quantite.
     *
     * @param quantite
     */
    public void setQuantite(int quantite){
        this.quantite = quantite;
    }

    /**
     * Decremente la valeur de l'attribut quantite de la valeur passe en parametre.
     *
     * @param quantite
     */
    public void diminuerDeQuantite(int quantite){
        this.quantite -= quantite;
    }

    /**
     * Augmente la valeur de l'attribut quantite de la valeur passe en parametre.
     *
     * @param quantite
     */
    public void augmenterDeQuantite(int quantite){
        this.quantite += quantite;
    }
}
