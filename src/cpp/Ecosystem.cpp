/*
 * File:   Ecosystem.cpp
 * Author: David KALONJI
 * Email : kalonjidvd@gmail.com
 *
 * Created on 26 aug 2016, 12:26
 * Last modified on Apr 21 16:30 2017
 */

#include <iostream>
#include <vector>
#include <typeinfo>
#include "ObjetsJungle.h"
#include "Nager.h"
#include "Arbre.h"
#include "PointDEau.h"
#include "Lion.h"
#include "Babouin.h"
#include "Aligator.h"

using namespace std;

/**
 Point d'entree de l'application Ecosystem
 */
int main(int argc, char** argv) {

    /**
     Instanciation des types statiques PointDEau, Arbre, Babouin, et Lion dans la
     memoire tas .
     Chaque objet est compose d'un comportement alimentaire par
     l'instanciation dans l'appel de son constructeur d'un type concret derive
     du type abstrait RegimeAlimentaire; d'un comportement mobile par
     l'instanciation d'un type concret derive du type abstrait Mobilite; et d'un
     comportement evolutif par l'instanciation d'un type concret derive du type
     abstrait Evoluable.
     */
    PointDEau* lePointDEau = new PointDEau(150);
    Arbre* lePalmier = new Arbre("Palmier", 150);
    Babouin* leBabouin = new Babouin("Babouin", 40);
    Lion* leLion = new Lion("Lion", 60);

    /**
     Creation d'un vecteur de pointeur type statiquement ObjetJungle.
     */
    vector<ObjetJungle*> lesObjetsJungle
    {
        lePointDEau,
        lePalmier,
        leBabouin,
        leLion
    };

    cout << "\n\t\tECOSYSTEM SIMULATION" << endl;

    /**
     Valeur des proprietes avant l'evolution polymorphique des objets types
     statiquement ObjetJungle et et dont le type dynamique ne sera connu qu'a
     l'execution (run-time).
     */
    cout << "\n********** AVANT EVOLUTION DES OBJETS **********" << endl;

    cout << "La quantite du point d'eau est : "
            << lePointDEau->getQuantite() << endl;

    cout << "La quantite du palmier est : "
            << lePalmier->getQuantite() << endl;

    cout << "L'energie du babouin est : "
            << leBabouin->getEnergie() << endl;

    cout << "L'energie du lion est : "
            << leLion->getEnergie() << endl;

    /**
     Evolution polymorphique des objets ObjetJungle.
     */
    cout << "\nEvolution des objets de la jungle..." << endl;

    /**
     On declare le compteur unsigned pour que la comparaison des deux expressions
     ne genere pas un warning de la part du compilateur.
     */
    for(unsigned int i = 0; i < lesObjetsJungle.size(); i++)
    {
        lesObjetsJungle[i]->evoluer();
    }

    /**
     Valeur des proprietes apres l'evolution polymorphique.
     */
    cout << "\n********** APRES EVOLUTION DES OBJETS **********" << endl;

    cout << "La quantite du point d'eau est : "
            << lePointDEau->getQuantite() << endl;

    cout << "La quantite du palmier est : "
            << lePalmier->getQuantite() << endl;

    cout << "L'energie du babouin est : "
            << leBabouin->getEnergie() << endl;

    cout << "L'energie du lion est : "
            << leLion->getEnergie() << endl;

    /**
     L'objet leBabouin execute sa methode manger(ObjetJungle unObjetJungle)
     avec comme argument l'objet lePalmier de type statique Arbre. Ici, l'objet
     en action est invoque selon son niveau d'abstraction Babouin.
     */
    cout << "\nLe babouin mange le palmier...\n" << endl;

    leBabouin->manger(lePalmier);

    cout << "La quantite du palmier est : "
		<< lePalmier->getQuantite() << endl;

    cout << "L' energie du babouin est : "
		<< leBabouin->getEnergie() << endl;


    /**
     L'objet leLion execute sa methode manger(ObjetJungle unObjetJungle) avec
     comme argument l'objet leBabouin de type statique Babouin. Ici, l'objet
     en action est invoquz selon son niveau d'abstraction Lion.
     */
    cout << "\nLe lion mange le babouin...\n" << endl;

    leLion->manger(leBabouin);

    cout << "L'energie du babouin est : "
            << leBabouin->getEnergie() << endl;

    cout << "L'energie du lion est : "
            << leLion->getEnergie() << "\n" << endl;

    /**
     Instantiation du type Aligator compose d'un objet de type Marche, responsable
     de son son comportement mobile.
     */
    Aligator* lAligator = new Aligator("Aligator", 60);

    /**
     Ajout de l'objet Aligator dans le vecteur type statiquement ObjetJungle
     pour l'execution polymorphique de sa methode evoluer().
     */
    lesObjetsJungle.push_back(lAligator);

    /**
     Execution de la mobilite de l'animal.
     */
    lAligator->seDeplacer();

    /**
     Changement dynamique de la mobilite de l'objet lAligator pendant l'
     execution (run-time).
     */
    lAligator->setMobilite(new Nager());

    /**
     Nouvelle Mobilite de l'animal.
     */
    lAligator->seDeplacer();


    cout << "\nLa quantite du point d'eau est : "
            << lePointDEau->getQuantite() << endl;

    /**
     L'objet lAligator execute sa methode boire(PointDEau lePointDEau).
     */
    cout << "\nL'aligator boit...\n" << endl;
    lAligator->boire(lePointDEau);

    cout << "La quantite du point d'eau est : "
            << lePointDEau->getQuantite() << endl;

    /**
     Desallocation de la memoire par la destruction des elements du vector type
     ObjetJungle et la destruction des instances des types derives concrets et
     de leurs compositions.
     */

    /**
      Efface tous les elements d'un vector. Si les elements sont eux-meme des
      pointeurs, le pointage sur la memoire n'est en aucun cas touche. La gestion
      des pointeurs est la responsabilite de l'utilisateur.
     */
    lesObjetsJungle.clear();

    /**
     Destruction des instances des types derives concrets et de leurs compositions
     */
    delete lePointDEau;
    delete lePalmier;
    delete leBabouin;
    delete leLion;
    delete lAligator;

    return 0;
}
