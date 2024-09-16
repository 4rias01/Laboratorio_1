#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "Boleta.h"

using namespace std;


class Pelicula
{
    private:
        string nombre, genero;
        int hora_inicio, minuto_inicio, hora_fin, minuto_fin;
        Boleta boletaA[40];
        int cant_boletas;

    public:
        Pelicula();
        int getHorario(int);
        string getNombre();
        string getGenero();
        void comprar_boleta();
        virtual ~Pelicula();
};
#else
class Pelicula

#endif // PELICULA_H
