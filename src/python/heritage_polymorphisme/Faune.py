#!/usr/bin/python
#-*- coding: utf-8 -*-


class Faune:

    energie = None
    espece = None


    def __init__(self, espece, energie):
      
        self.espece = espece
        self.energie = energie


    def getEnergie(self):
       
        return self.energie


    def setEnergie(self, energie):
      
        self.energie = energie


    def getEspece(self):
      
        return self.espece


    def augmenterDEnergie(self, energie):
     
        self.energie += energie


    def boire(self, lePointDeau):
     
        while self.energie <= 50:
            if(lePointDeau.getQuantite() > 19):
                lePointDeau.diminuerDeQuantite(3)
                self.energie += 3


    def manger(self, objetConsommable):
      
        return NotImplemented
