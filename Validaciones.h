#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <string>
#include <iostream>

using namespace std;



class Validaciones
{
    private:

    public:
        Validaciones();
        ~Validaciones();
        bool validar_genero(string);
        bool validar_horario(int,int);
        bool validar_pelicula(string, Pelicula[], int);
        string leerNoVacio(string);
        double leerNoVacioNoNegativo(string);
        bool vacio (string);
        bool validar_hora_comp(double, double, double, double, Programacion);
        bool validar_hora(double, double, double, double);
        string minusc(string);
        string Leer(string);
        string capital(string);
        

};

#else
class Validaciones;


#endif 
