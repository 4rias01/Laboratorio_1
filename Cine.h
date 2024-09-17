#ifndef CINE_H
#define CINE_H
#include "Sala.h"



class Cine
{
    private:
        double precio_general;
        Sala salasArr[5];
        int cantSalas;
        int cantPeliculas;
    
    public:
        Cine();
        ~Cine();
        void bienvenida();
        void setPrecio_general();
        void consult_por_horario();
        void consult_por_genero();
        double getPrecio_general();
        void ingresarPelicula();
        void ingresarSala();
};

#else
class Cine;
#endif 

