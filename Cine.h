#ifndef CINE_H
#define CINE_H
#include "Sala.h"


class Cine
{
    private:
        int precio_general;
        Sala salaA[5];
        int cant_salas;

    public:
        Cine();
        void ingresar_sala();
        void consult_por_horario();
        void consult_por_genero();
        int getPrecio_general();
        virtual ~Cine();
};

#endif // CINE_H
