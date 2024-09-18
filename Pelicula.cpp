/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#include "Pelicula.h"
#include "Validaciones.h"
#include "Cine.h"
#include <iostream>

using namespace std;

/*Objeto validaciones para manejo de datos*/
Validaciones valPeli = Validaciones(); 

/*Constructor vacio de clase, incializa el nombre y género como strings vacios*/
Pelicula::Pelicula()
{
    nombre = "";
    genero = "";
}

/*Calcula el valor del precio de entrada a la película según el género y el precio general*/
double Pelicula::calPrecio(double _precio)

{
    string _genero = valPeli.minusc(genero);

    if (_genero == "comedia" or _genero=="drama")
    {
        _precio = _precio*1.1;
    }
    else if (_genero == "romance" or _genero =="accion")
    {
       _precio = _precio*1.15;
    }

    else if (_genero == "suspenso" or _genero=="terror") 
    {
        _precio = _precio*1.18;
    }
    else if (_genero == "ciencia ficcion" or _genero=="fantasia") 
    {
       _precio = _precio*1.23;
    }

    return _precio;
}

/*Constructor de clase que asigna nombre y genero*/
Pelicula::Pelicula(string _nombre, string _genero, double precioGen)
{
    nombre = _nombre;
    genero = _genero;
    precio = calPrecio(precioGen);

}

/*Constructor de clase que asigna sólo nombre*/
Pelicula::Pelicula(string _nombre)
{
    nombre = _nombre;
}

/*Retorna el atributo nombre de la película*/
string Pelicula::getNom() 
{
    return nombre;
}

/*Retorna el atributo precio de la película en formato de precio*/
string Pelicula::getPrecio() 
{
    char buffer[50];
    
    sprintf(buffer, "%.2f", precio);

    string res(buffer);

    return res;
}

/*Retorna el atributo genero de la película*/
string Pelicula::getGenero() 
{
    return genero;
}

/*Destructor de la clase película*/
Pelicula::~Pelicula()
{

}