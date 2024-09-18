/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef PROGRAMACION_H
#define PROGRAMACION_H

#include "Pelicula.h"
#include "Boleta.h"

class Programacion
{
    private:
        Pelicula laPelicula;
        double hora_inicio;
        double min_inicio;
        double min_final;
        double hora_final;
        double duracion;
        Boleta listEntradas[30];

    public:
        Programacion();
        Programacion(Pelicula, double, double, double, double);
        int contarEntradas();
        double getHoraInicial();
        double getHoraFinal();
        string getDuracion();
        string getGenero();
        string getNom();
        string mostrarPelicula();
        string mostrarFuncion();
        string mostrarInfo();
};
#else
class Programacion;
#endif 
