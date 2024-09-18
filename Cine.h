/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef CINE_H
#define CINE_H
#include "Sala.h"


class Cine
{
    private:
        double precio_general;
        Sala salasArr[5];
        Pelicula catalogo[20];
        Pelicula NoPelicula;
        int cantSalas;
        int cantPeliculas;

    public:
        Cine();
        ~Cine();
        void bienvenida();
        void ensayo();
        void setPrecio_general();
        void consult_por_horario();
        void consult_por_genero();
        double getPrecio_general();
        void ingresarPelicula();
        void ingresarSala();
        Pelicula buscarPelicula(string);
};

#else
class Cine;
#endif

