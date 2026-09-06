#!/usr/bin/python
#-*- coding: utf-8 -*-


class Ressource:

    quantite = None


    def __init__(self, quantite):
      
        self.quantite = quantite


    def getQuantite(self):
        
        return self.quantite


    def setQuantite(self, quantite):
       
        self.quantite = quantite


    def diminuerDeQuantite(self, quantite):
        
        self.quantite -= quantite


    def evoluer(self):
       
        return NotImplemented
