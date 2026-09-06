#!/usr/bin/python
#-*- coding: utf-8 -*-


class Eau:

    __quantite = 68 

    def __init__(self):
       
        pass


    def getQuantite(self):
        
        return self.__quantite


    def setQuantite(self, quantite):
        
        self.__quantite = quantite


    def diminuer(self, decroit):
        
        self.__quantite -= decroit


    def evoluer(self):
        
        self.__quantite -= 4
