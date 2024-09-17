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
        bool validar_pelicula(string, string, Pelicula[], int);
        string leerNoVacio(string);
        double leerNoVacioNoCero(string);
        bool vacio (string);
        bool comparar_hora(double, double, double, double, Programacion, int);
        bool validar_hora(double, double, double, double);
        string minusc(string);
        string Leer(string);
        string capital(string);
        double leerHora(string);
        double leerMinuto(string);
        

};

#else
class Validaciones;


#endif 
