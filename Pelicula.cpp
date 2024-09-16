#include "Pelicula.h"
#include "Validaciones.h"
#include <iostream>

using namespace std;

/*Constructor vacio de clase, incializa el nombre y género como strings vacios*/
Pelicula::Pelicula()
{
    nombre = "";
    genero = "";
}

/*Constructor de clase que asigna nombre y genero*/
Pelicula::Pelicula(string _nombre, string _genero)
{
    nombre = _nombre;
    genero = _genero;
}

Pelicula::~Pelicula() {}

double Pelicula::calPrecio(double _precio, string _genero)
{
    precio = validaciones.getParametro(nombre); 
    return precio;
}

string Pelicula::getNombre() 
{
    return nombre;
}

string Pelicula::getGenero() 
{
    return genero;
}
