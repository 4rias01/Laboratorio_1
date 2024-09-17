#ifndef PROGRAMACION_H
#define PROGRAMACION_H
#include "Pelicula.h"

class Programacion
{
    private:
        Pelicula laPelicula;

    public:
        Programacion();
        void ingresar_pelicula();
        void definir_horario();
        void getHorario();
};
#else
class Programacion;
#endif 
