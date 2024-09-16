#ifndef CINE_H
#define CINE_H
#include "Sala.h"

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
        float getPrecio_general();
};

#else
class Cine;
#endif 

