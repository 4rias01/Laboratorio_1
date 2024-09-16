#ifndef SALA_H
#define SALA_H
#include <string>
#include "Programacion.h"


class Sala
{
    private:
        string nom_sala;
        Programacion programacionO;

    public:
        Sala();
        virtual ~Sala();
};
#else
class Sala

#endif // SALA_H
