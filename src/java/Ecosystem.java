/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.ArrayList; // Pour typer le tableau ObjetJungle

/*
 * File:   Jungle.java
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 27 Aug 2016, 12:26
 * Last modified on Apr 21 16:36 2017
 */

/**
 * Classe principale de l'application Ecosystem.
 */
public class Ecosystem {

    /**
     * Point d'entree de l'application.
     *
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /**
         * Instanciation des classes PointDEau, Arbre, Babouin, et Lion dans la
         * memoire tas .
         * Chaque objet est compose d'un comportement alimentaire par
         * l'instanciation dans l'appel de son constructeur d'une classe concrete
         * derive implementant l'interface RegimeAlimentaire; d'un comportement
         * mobile par l'instanciation d'une classe concrete implementant
         * l'interface Mobilite; et d'un comportement evolutif par l'instanciation
         * d'une classe concrete implementant l'interface Evoluable.
         */
        PointDEau lePointDEau = new PointDEau(150);
        Arbre lePalmier = new Arbre("Palmier", 150);
        Babouin leBabouin = new Babouin("Babouin", 40);
        Lion leLion = new Lion("Lion", 60);


        /**
         * Creation d'une ArrayList typee statiquement ObjetJungle.
         */
        ArrayList<ObjetJungle> lesObjetsJungle = new ArrayList<>();
        lesObjetsJungle.add(lePointDEau);
        lesObjetsJungle.add(lePalmier);
        lesObjetsJungle.add(leBabouin);
        lesObjetsJungle.add(leLion);

        System.out.print("\n\t\tECOSYSTEM SIMULATION\n\n");

        /**
         * Valeur des proprietes avant l'evolution polymorphique des objets types
         * statiquement ObjetJungle et et dont le type dynamique ne sera connu qu'a
         * l'execution (run-time).
         */
        System.out.println("********** AVANT EVOLUTION DES OBJETS **********");

        System.out.printf("La quantite du point d'eau est : %d\n",
                lePointDEau.getQuantite());

        System.out.printf("La quantite du palmimer est : %d\n",
                lePalmier.getQuantite());

        System.out.printf("L'energie du babouin est : %d\n",
                leBabouin.getEnergie());

        System.out.printf("L'energie du lion est : %d\n",
                leLion.getEnergie());


        /**
         * Evolution polymorphique des objets ObjetJungle.
         */
        System.out.println("\nEvolution des objets de la jungle...\n");

        for (ObjetJungle lesObjetsJungle1 : lesObjetsJungle) {
            lesObjetsJungle1.evoluer();
        }

        /**
         * Alternative : utilisation d'une operation fonctionnelle.
         */
//        lesObjetsJungle.stream().forEach((lesObjetsJungle1) -> {
//            lesObjetsJungle1.evoluer();
//        });

        /**
         * Valeur des proprietes apres l'evolution polymorphique.
         */
        System.out.println(
                "********** APRES EVOLUTION DES OBJETS **********"
        );

        System.out.printf("La quantite du point d'eau est : %d\n",
                lePointDEau.getQuantite());

        System.out.printf("La quantite du palmimer est : %d\n",
                lePalmier.getQuantite());

        System.out.printf("L'energie du babouin est : %d\n",
                leBabouin.getEnergie());

        System.out.printf("L'energie du lion est : %d\n",
                leLion.getEnergie());

        /**
         * L'objet leBabouin execute sa methode manger(ObjetJungle unObjetJungle)
         * avec comme argument l'objet lePalmier de type statique Arbre. Ici, l'objet
         * en action est invoque selon son niveau d'abstraction Babouin.
         */
       System.out.println("\nLe babouin mange le palmier...\n");

       leBabouin.manger(lePalmier);

       System.out.printf("La quantite du palmier est : %d\n",
                    lePalmier.getQuantite());

       System.out.printf("L' energie du babouin est : %d\n",
                    leBabouin.getEnergie());



        /**
         * L'objet leLion execute sa methode manger(ObjetJungle unObjetJungle) avec
         * comme argument l'objet leBabouin de type statique Babouin. Ici, l'objet
         * en action est invoquz selon son niveau d'abstraction Lion.
         */
        System.out.print("\nLe lion mange le babouin...\n");

        leLion.manger(leBabouin);

        System.out.printf("\nL'energie du babouin est : %d\n",
                leBabouin.getEnergie());

        System.out.printf("L'energie du lion est : %d\n\n",
                leLion.getEnergie());


        /**
         * Instantiation de la classe Aligator compose d'un objet de type Marche,
         * responsable de son son comportement mobile.
         */
        Aligator lAligator = new Aligator("Aligator", 60);


        /**
         * Ajout de l'objet Aligator dans le tableau type statiquement ObjetJungle
         * pour l'exécution polymorphique de sa méthode evoluer().
         */
        lesObjetsJungle.add(lAligator);


        /**
         * Execution de la mobilite de l'animal.
         */
        lAligator.seDeplacer();


        /**
         * Changement dynamique de la mobilite de l'objet lAligator pendant l'
         * execution (run-time).
         */
        lAligator.setMouvement(new Nager());


        /**
         * Nouvelle Mobilite de l'animal.
         */
        lAligator.seDeplacer();


        /**
         * L'objet lAligator execute sa methode boire(PointDEau lePointDEau).
         */
        System.out.printf("\nLa quantite du point d'eau est : %d\n",
                lePointDEau.getQuantite());

        System.out.print("\nL'aligator boit...\n");
        lAligator.boire(lePointDEau);

        System.out.printf("\nLa quantite du point d'eau est : %d\n",
                lePointDEau.getQuantite());
    }
}
