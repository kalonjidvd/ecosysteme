/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Faune.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:42 2017
 */

/**
 * Classe Faune sous-classe de ObjetJungle.
 * L'heritage est public par defaut.
 */
public abstract class Faune extends ObjetJungle{

    private int energie;
    private String espece;
    protected RegimeAlimentaire alimentation;
    protected Mobilite mouvement;

    /**
     * Initialise les attributs prives d'un objet de la classe Faune.
     *
     * @param espece
     * @param energie
     */
    public void Faune(String espece, int energie){
        this.espece = espece;
        this.energie = energie;
    }

    /**
     * Accesseur en lecture pour l'attribut prive espece.
     *
     * @return espece
     */
    public String getEspece(){
        return this.espece;
    }

    /**
     * Accesseur en ecriture pour l'attribut prive energie.
     *
     * @param energie
     */
    public void setEnergie(int energie){
        this.energie = energie;
    }

    /**
     * Accesseur en lecture pour l'attribut prive energie.
     *
     * @return energie
     */
    public int getEnergie(){
        return this.energie;
    }

    /**
     * Decremente la valeur de l'attribut energie d'un objet de type Faune.
     *
     * @param energie
     */
    public void diminuerDEnergie(int energie){
        this.energie -= energie;
    }

    /**
     * Augmente la valeur de l'attribut energie d'un objet de type Faune.
     *
     * @param energie
     */
    public void augmenterDEnergie(int energie){
        this.energie += energie;
    }

    /**
     * Permet a tout objet de type Faune de s'abreuver
     *
     * @param lePointDEau
     */
    public void boire(PointDEau lePointDEau){
        while(this.getEnergie() <= 81)
            if(lePointDEau.getQuantite() > 19)
            {
                lePointDEau.diminuerDeQuantite(20);
                this.augmenterDEnergie(20);
            }
    }

    /**
     * Comportement delegue a un objet de la classe concrete Carnivore  ou Herbivore,
     * implementant l'interface RegimeAlimentaire.
     *
     * @param unObjetJungle
     */
    public void manger(ObjetJungle unObjetJungle){
        this.alimentation.seNourrir(this, unObjetJungle);
    }

    /**
     * Comportement delegue a un objet de la classe concrete Marcher, Courir ou Nager,
     * implementant l'interface Mobilite.
     */
    public void seDeplacer(){
        this.mouvement.seMouvoir(this);
    }

    /**
     * Modification dynamique du comportement alimentaire, delegue a un objet
     * de la classe concrete Carnivore ou Herbivore, implementant l'interface
     * RegimeAlimentaire.
     *
     * @param alimentation
     */
    public void setAlimentation(RegimeAlimentaire alimentation){
        this.alimentation = alimentation;
    }

    /**
     * Modification dynamique du comportement mobile, delegue a un objet de
     * la classe concrete Marcher, Courir ou Nager, implementant l'interface Mobilite.
     *
     * @param mouvement
     */
    public void setMouvement(Mobilite mouvement){
        this.mouvement = mouvement;
    }

    /**
     * Redéfinition de la methode toString() définie dans la superclasse Objetc
     * de Java (elle est la premiere de toute les classes Java).
     * Sert a afficher le type dynamique des instances.
     * Syntaxe différente de celle de C++. Qui utilise
     * l'interface Const type_info& pour recuperer le type dynamique des objets.
     * Autrement appele RTTI (Run-Time Type Information).
     *
     * @return className
     */
    public String toString(){
        return getClass().getSimpleName();
    }

}
