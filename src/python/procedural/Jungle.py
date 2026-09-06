# -*- coding: utf-8 -*-


lePointDeau = {'type' : 'Eau', 'quantite' : 68}

laPlante = {'type' : 'Plante', 'espece' : 'Manguier', 'taille' : 64}

laProie = {'type' : 'Proie', 'espece' : 'Singe', 'energie' : 29}

lePredateur = {'type' : 'Predateur', 'espece' : 'Lion', 'energie' : 37}


def diminuer(laRessource, decroit):
 
    if(laRessource['type'] == 'Eau'):
        if(laRessource['quantite'] > decroit):
            laRessource['quantite'] -= decroit

    elif(laRessource['type'] == 'Plante'):
        if(laRessource['taille'] > decroit):
            laRessource['taille'] -= decroit


def boire(laFaune):
    
    if(laFaune['type'] == 'Proie'):
        while laFaune['energie'] <= 50:
            if(lePointDeau['quantite'] > 19):
                diminuer(lePointDeau, 5)
                laProie['energie'] += 5
    elif(laFaune['type'] == 'Predateur'):
        while laFaune['energie'] <= 50:
            if(lePointDeau['quantite'] > 19):
                diminuer(lePointDeau, 3)
                lePredateur['energie'] += 3


def manger(laFaune, laRessource):
   
    if(laFaune['type'] == 'Proie' and laRessource['type'] == 'Plante'):
        while laFaune['energie'] <= 70:
            if(laRessource['taille'] > 29):
                diminuer(laRessource, 1)
                laFaune['energie'] += 1
    elif(laFaune['type'] == 'Predateur' and laRessource['type'] == 'Proie'):
        if(laRessource['energie'] != 0):
            while laFaune['energie'] < 99:
                laFaune['energie'] += 1
                --laRessource['energie']
            laRessource['energie'] = 0


def evoluer():
    
    lePointDeau['quantite'] -= 4
    laPlante['taille'] += 4

def main():

   
    print("\nVALEUR DE DEPART DES VARIABLES DE L'APPLICATION\n")

    print("la proie : espece = %s" % laProie['espece'] + ", energie = %d" % laProie['energie'] + "%")
    print("le predateur : espece = %s" % lePredateur['espece'] + ", energie = %d" % lePredateur['energie'] + "%")
    print("le point d'eau : quantite = %d" % lePointDeau['quantite'] + "%")
    print("la plante : taille = %d" % laPlante['taille'] + "%")

 
    print("\nDEMARRAGE DE L'APPLICATION...")

    print("\nla proie boit de l'eau...\n")
    boire(laProie)

    print("La quantite de l'eau est : %d" % lePointDeau['quantite'] + "%")
    print("L'énergie de la proie est : %d" % laProie['energie'] + "%")

    print("\nle prédateur boit de l'eau...\n")
    boire(lePredateur)

    print("La quantite de l'eau est : %d" % lePointDeau['quantite'] + "%")
    print("L'énergie du prédateur est : %d" % lePredateur['energie'] + "%")

    print("\nla proie mange la plante...\n")
    manger(laProie, laPlante)

    print("La taille de la plante est : %d" % laPlante['taille'] + "%")
    print("L'énergie de la proie est : %d" % laProie['energie'] + "%")

    print("\nle prédateur mange la proie...\n")
    manger(lePredateur, laProie)

    print("L'énergie de la proie est : %d" % laProie['energie'] + "%")
    print("L'énergie du prédateur est : %d" % lePredateur['energie'] + "%")

    print("\nLes ressources evoluent...\n")
    evoluer()

    print("La quantite de l'eau est : %d" % lePointDeau['quantite'] + "%")
    print("La taille de la plante est %d" % laPlante['taille'] + "%\n")


if __name__ == '__main__':
    main()
