#include "Pelicula.h"
#include "Validaciones.h"
#include <iostream>  // Para std::cout si necesitas imprimir algo
using namespace std;

Validaciones validaciones;  // Crear una Validacion 

Pelicula::Pelicula()
{
    nombre = "";
    genero = "";
}

Pelicula::Pelicula(string _nombre, string _genero)
{
    nombre = _nombre;
    genero = _genero;
}

Pelicula::~Pelicula() {}

float Pelicula::calprecio(float _precio, string _genero)
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
