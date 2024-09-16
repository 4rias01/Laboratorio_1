#ifndef SALA_H
#define SALA_H

#include "Pelicula.h"

class Sala
{
    private:
        int hora_inicio = 0;
        int minuto_inicio = 0;
        int hora_fin = 0;
        int minuto_fin = 0;
    public:
        Sala();
        ~Sala();
        void Programacion(Pelicula _pelicula, int _hora_inicio, int _minuto_inicio, int _hora_fin, int _minuto_fin);
        void getProgramacion(Pelicula _pelicula); 
};

#endif
