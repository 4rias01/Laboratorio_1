#ifndef PROGRAMACION_H
#define PROGRAMACION_H
#include "Pelicula.h"

class Programacion
{
    private:
        Pelicula laPelicula;
        int cant_peliculas;
        double hora_inicio;
        double hora_final;

    public:
        Programacion();
        void ingresar_pelicula();
        void definir_horario();
        void getHorario();
        string getGenero();
        string mostrarPelicula();
};
#else
class Programacion;
#endif 
