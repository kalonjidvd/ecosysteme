#!/usr/bin/python
#-*- coding: utf-8 -*-


from Ressource import Ressource


class Eau(Ressource):


    def __init__(self, quantite):
       
        Ressource.__init__(self, quantite)


    def evoluer(self):
       
        self.diminuerDeQuantite(2)
