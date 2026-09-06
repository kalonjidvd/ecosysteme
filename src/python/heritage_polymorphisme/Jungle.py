#!/usr/bin/python
#-*- coding: utf-8 -*-


from Plante import Plante
from Eau import Eau
from Proie import Proie
from Predateur import Predateur


def main():

    lePointDeau = Eau(68)
    laPlante = Plante(64, "Manguier")
    laProie = Proie("Singe", 29)
    lePredateur = Predateur("Lion", 37)

    lesRessources = {}
    lesRessources[0] = lePointDeau
    lesRessources[1] = laPlante

    print("\n\nECOSYSTEM SIMULATION...\n")

    print("\nlaPlante : type = %s, quantite = %d"
        % (laPlante.getEspece(), laPlante.getQuantite()) + "%\n")

    print("lePointDeau : quantite = %d"
        % (lePointDeau.getQuantite())+ "%\n")

    print("laProie : espece = %s, energie = %d"
        % (laProie.getEspece(), laProie.getEnergie()) + "%\n")

    print("lePredateur : espece = %s, energie = %d"
        % (lePredateur.getEspece(), lePredateur.getEnergie()) + "%\n")

    print("\nla proie boit de l'eau...\n")
    laProie.boire(lePointDeau)

    print("la quantité de l'eau est : %d"
        % (lePointDeau.getQuantite()) + "%")
    print("L'énergie de la proie est : %d"
        % (laProie.getEnergie()) + "%\n")

    print("le prédateur boit de l'eau...\n")
    lePredateur.boire(lePointDeau)

    print("la quantité de l'eau est : %d"
        % lePointDeau.getQuantite() + "%")
    print("L'énergie du prédateur est : %d"
        % lePredateur.getEnergie() + "%\n")

    print("la proie mange la plante...\n")
    laProie.manger(laPlante)

    print("la quantite de la plante est : %d"
        % laPlante.getQuantite() + "%")
    print("L'énergie de la proie est : %d"
        % laProie.getEnergie() + "%\n")

    print("le prédateur mange la proie...\n")
    lePredateur.manger(laProie)

    print("l'énergie de la proie est : %d"
        % laProie.getEnergie() + "%")
    print("l'énergie du prédateur est : %d"
        % lePredateur.getEnergie() + "%\n")

    print("Les ressources evoluent...\n")
    i = 0
    while i < len(lesRessources):
        lesRessources[i].evoluer()
        i += 1

    print("la quantité de l'eau est : %d"
        % lePointDeau.getQuantite() + "%")
    print("la quantite de la plante est : %d"
        % laPlante.getQuantite() + "%")


if __name__ == '__main__':
    main()
