#!/usr/bin/python
#-*- coding: utf-8 -*-


class Proie:

    __espece = None 
    __energie = 29 


    def __init__(self, espece):
        
        self.__espece = espece


    def getEspece(self, ):
     
        return self.__espece


    def getEnergie(self):
       
        return self.__energie


    def setEnergie(self, energie):
       
        self.__energie = energie


    def augmenterDEnergie(self, energie):
       
        self.__energie += energie


    def boire(self, lePointDeau):
        
        while self.__energie <= 50:
            if(lePointDeau.getQuantite() > 19):
                lePointDeau.diminuer(5)
                self.augmenterDEnergie(5)


    def manger(self, laPlante):
        
        while self.__energie <= 71:
            if(laPlante.getTaille() > 29):
                laPlante.diminuer(1)
                self.augmenterDEnergie(1)
