#ifndef CINE_H
#define CINE_H
#include "Sala.h"

string Leer(string);

class Cine
{
    private:
        double precio_general;
        Sala salasArr[5];
        int cantSalas;
    
    public:
        Cine();
        ~Cine();
        void setPrecio_general();
        void consult_por_horario();
        void consult_por_genero();
        double getPrecio_general();
        void ingresar_Pelicula();
};

#else
class Cine;
#endif 

