#!/usr/bin/python
#-*- coding: utf-8 -*-


from Eau import Eau
from Plante import Plante
from Proie import Proie
from Predateur import Predateur

def main():
  
    lePointDeau = Eau()
    laPlante = Plante("Manguier")
    laProie = Proie("Singe")
    lePredateur = Predateur("Lion")

    print("\n\nECOSYSTEM SIMULATION...\n")

    print("\nla proie boit de l'eau...\n")
    laProie.boire(lePointDeau)

    print("la quantite de l'eau est : %d" % lePointDeau.getQuantite() + "%")
    print("L'energie de la proie est : %d" % laProie.getEnergie() + "%\n")

    print("le predateur boit de l'eau...\n")
    lePredateur.boire(lePointDeau)

    print("la quantite de l'eau est : %d" % lePointDeau.getQuantite() + "%")
    print("L'energie du predateur est : %d" % lePredateur.getEnergie() + "%\n")

    print("la proie mange la plante...\n")
    laProie.manger(laPlante)

    print("la taille de la plante est : %d" % laPlante.getTaille() + "%")
    print("L'energie de la proie est : %d" % laProie.getEnergie() + "%\n")

    print("le predateur mange la proie...\n")
    lePredateur.manger(laProie)

    print("l'energie de la proie est : %d" % laProie.getEnergie() + "%")
    print("l'energie du predateur est : %d" % lePredateur.getEnergie() + "%\n")

    print("L'eau s'evapore...")
    lePointDeau.evoluer()
    print("La plante croit...\n")
    laPlante.evoluer()

    print("la quantite de l'eau est : %d" % lePointDeau.getQuantite() + "%")
    print("la taille de la plante est : %d" % laPlante.getTaille() + "%")



if __name__ == '__main__':
    main()
