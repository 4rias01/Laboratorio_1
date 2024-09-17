#ifndef SALA_H
#define SALA_H

#include "Pelicula.h"
#include "Programacion.h"

class Sala
{
    private:
    string nombre;
    
    Programacion listProgramacion[4];

    public:
        Sala();
        string buscarPelicula(string, string);
        ~Sala();

};
#else
class Sala;
#endif
