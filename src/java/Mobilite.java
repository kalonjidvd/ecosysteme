/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   Mobilite.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 août 2016, 13:49
 * Last modified on Apr 21 16:39 2017
 */

/**
 * Interface Mobilite.
 */
public interface Mobilite {

    /**
     * Methode abstraite qui doit etre implementee par les sous-classes concretes.
     *
     * @param laFaune
     */
    public void seMouvoir(Faune laFaune);
}
