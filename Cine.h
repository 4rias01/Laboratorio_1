#ifndef CINE_H
#define CINE_H
#include "Sala.h"



class Cine
{
    private:
        double precio_general;
        Sala salasArr[5];
        Pelicula catalogo[20];
        Pelicula NoPelicula;
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
        void ensayo();
        Pelicula buscarPelicula(string);
};

#else
class Cine;
#endif 

