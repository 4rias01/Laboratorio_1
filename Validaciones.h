#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <string>
#include <iostream>

string minus(string);

class Validaciones
{
    private:

    public:
        Validaciones();
        ~Validaciones();
        bool validar_genero(string);
        bool validar_horario(int,int);
        bool vacio(string);
        double getParametro(string);
        

};

#else
class Validaciones;


#endif 
