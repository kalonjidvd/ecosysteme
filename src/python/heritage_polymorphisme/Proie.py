#!/usr/bin/python
#-*- coding: utf-8 -*-


from Faune import Faune


class Proie(Faune):


    def __init__(self, espece, energie):
       
        Faune.__init__(self, espece, energie)


    def manger(self, laPlante):
        
        while self.energie <= 71:
            if(laPlante.getQuantite() > 29):
                laPlante.diminuerDeQuantite(1)
                self.augmenterDEnergie(1)
    
