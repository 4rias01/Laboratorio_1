#ifndef SALA_H
#define SALA_H

#include "Pelicula.h"
#include "Programacion.h"

class Sala
{
    private:
        
        Programacion listProgramacion[4];
    public:
        Sala();
        ~Sala();

};
#else
class Sala;
#endif
