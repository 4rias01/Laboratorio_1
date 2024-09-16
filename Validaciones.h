#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <string>
#include <iostream>

using namespace std;

string minus(string);
string Leer(string);

class Validaciones
{
    private:

    public:
        Validaciones();
        ~Validaciones();
        bool validar_genero(string);
        bool validar_horario(int,int);
        string leerNoVacio(string);
        

};

#else
class Validaciones;


#endif 
