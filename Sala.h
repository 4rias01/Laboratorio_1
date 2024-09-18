/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef SALA_H
#define SALA_H

#include "Pelicula.h"
#include "Programacion.h"
#include "Validaciones.h"
#include <string>

class Sala
{
    private:
    string nombre;
    Programacion listProgramacion[4];

    public:
        Sala();
        Sala(string, Programacion[4]);
        string buscarGenero(string);
        string buscarNombre(string);
        ~Sala();

};
#else
class Sala;
#endif
