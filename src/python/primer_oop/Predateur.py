#!/usr/bin/python
#-*- coding: utf-8 -*-


class Predateur:

    __espece = None 
    __energie = 37 


    def __init__(self, espece):
        
        self.__espece = espece


    def getEspece(self, ):
       
        return self.__espece


    def getEnergie(self, ):
        
        return self.__energie


    def setEnergie(self, energie):
      
        self.__energie = energie


    def augmenterDEnergie(self, energie):
      
        self.__energie += energie


    def boire(self, lePointDeau):
       
        while self.__energie <= 50:
            if(lePointDeau.getQuantite() > 19):
                lePointDeau.diminuer(3)
                self.augmenterDEnergie(3)


    def manger(self, laProie):
      
        if(laProie.getEnergie() != 0):
            while self.getEnergie() <= 99:
                self.setEnergie(self.getEnergie()+1)
                laProie.setEnergie(laProie.getEnergie()-1)
            laProie.setEnergie(0)
