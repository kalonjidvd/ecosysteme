#!/usr/bin/python
#-*- coding: utf-8 -*-


from Faune import Faune


class Predateur(Faune):


    def __init__(self, espece, energie):
       
        Faune.__init__(self, espece, energie)


    def manger(self, laProie):
      
        if(laProie.getEnergie() != 0):
            while self.getEnergie() <= 99:
                self.setEnergie(self.getEnergie()+1)
                laProie.setEnergie(laProie.getEnergie()-1)
            laProie.setEnergie(0)
         
