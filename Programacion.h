#ifndef PROGRAMACION_H
#define PROGRAMACION_H
#include "Pelicula.h"

class Programacion
{
    private:
        Pelicula laPelicula;
        double hora_inicio;
        double min_inicio;
        double min_final;
        double hora_final;
        double duracion;

    public:
        Programacion();
        Programacion(Pelicula, double, double, double, double);
        void ingresar_pelicula();
        void definir_horario();
        double getHoraInicial();
        double getHoraFinal();
        double getDuracion();
        string getGenero();
        string getNom();
        string mostrarPelicula();
        string mostrarFuncion();
};
#else
class Programacion;
#endif 
