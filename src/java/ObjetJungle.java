/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   ObjetJungle.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:37 2017
 */

/**
 * Superclasse ObjetJungle.
 */
public abstract class ObjetJungle {

    /**
     * Tous les referents types des sous-classe concretes implementant les
     * comportements des objets de l'application doivent avoir un niveau
     * d'encapsulation protege dans la declaretion des superclasses pour etre
     * accessible lors de l'instanciation des sous-classes concretes : Lion,
     * Arbre, etc.
     */
    protected Evoluable evolue;

    /**
     * Les objets des classes concretes Faiblir, Pousser et Evaporer implementant
     * l'interface RegimeAlimentaire et responsable de l'evolution des objets
     * ObjetsJungle seront instanciees au niveau du constructeur des classes
     * concretes Lion, Arbre, etc.; sous-classes de Faune et Ressource.

     * La superclasse ObjetJungle est polymorphique par defaut. Sa methode evoluer()
     * admet directement le downcasting dans l'implementation de la methode
     * seNourrir(Faune* consommateur, ObjetJungle* consommable) des classes concretes
     * Carnivore et Herbivore; implementant l'interface RegimeAlimentaire.
     */
    public void evoluer(){
        this.evolue.evolution(this);
    }

}
