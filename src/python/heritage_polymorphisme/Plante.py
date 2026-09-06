#!/usr/bin/python
#-*- coding: utf-8 -*-


from Ressource import Ressource


class Plante(Ressource):

    __espece = None


    def __init__(self, quantite, espece):
        
        Ressource.__init__(self, quantite)
        self.__espece = espece


    def getEspece(self):
        
        return self.__espece


    def croitre(self, quantite):
       
        self.quantite += quantite


    def evoluer(self):

        self.croitre(1)
