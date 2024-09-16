#include "Pelicula.h"
#include "Validaciones.h"
#include "Cine.h"
#include <iostream>

using namespace std;

/*Constructor vacio de clase, incializa el nombre y género como strings vacios*/
Pelicula::Pelicula()
{
    nombre = "";
    genero = "";
}


double Pelicula::calPrecio(double _precio, string _genero)
{
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
    precio = calPrecio(precioGen, _genero);

}

Pelicula::~Pelicula()
{

}

string Pelicula::getNombre() 
{
    return nombre;
}

string Pelicula::getGenero() 
{
    return genero;
}
