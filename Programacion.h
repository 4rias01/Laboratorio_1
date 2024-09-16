#ifndef PROGRAMACION_H
#define PROGRAMACION_H
#include "Pelicula.h"


class Programacion
{
    private:
        Pelicula peliculaA[20];
        Pelicula horario[4];
        int cant_peliculas, cant_horario;

    public:
        Programacion();
        void ingresar_pelicula();
        void definir_horario();
        void getHorario();
        virtual ~Programacion();
};
#else
class Programacion

#endif // PROGRAMACION_H
