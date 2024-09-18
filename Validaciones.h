/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <string>
#include <iostream>
#include "Programacion.h"

using namespace std;



class Validaciones
{
    private:

    public:
        Validaciones();
        ~Validaciones();
        bool validar_genero(string);
        bool validar_pelicula(string, string, Pelicula[], int);
        string leerNoVacio(string);
        double leerNoVacioNoCero(string);
        bool vacio (string);
        bool comparar_hora(double, double, double, double, Programacion, int);
        bool validar_hora(double, double, double, double);
        string minusc(string);
        string Leer(string);
        string capital(string);
        double leerHora(string);
        double leerMinuto(string);
        

};

#else
class Validaciones;


#endif 
