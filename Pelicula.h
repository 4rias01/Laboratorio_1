/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef PELICULA_H
#define PELICULA_H
#include <string>


using namespace std;

class Pelicula
{
    private:
        string nombre;
        string genero;
        double precio;

    public:
        Pelicula();
        Pelicula(string);
        Pelicula(string, string, double);
        double calPrecio(double);
        string getNom();
        string getGenero();
        string getPrecio();
        ~Pelicula();
};
#else
class Pelicula;
#endif 
