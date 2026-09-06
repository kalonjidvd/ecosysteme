#!/usr/bin/python
#-*- coding: utf-8 -*-


class Plante:

    __espece = None 
    __taille = 64 


    def __init__(self, espece):
        
        self.__espece = espece


    def getTaille(self):
       
        return self.__taille


    def setTaille(self, taille):
        
        self.__taille = taille


    def diminuer(self, decroit):
  
        self.__taille -= decroit


    def evoluer(self):
      
        self.__taille += 4
