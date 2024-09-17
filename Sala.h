#ifndef SALA_H
#define SALA_H

#include "Pelicula.h"
#include "Programacion.h"
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
