#include "Programacion.h"
#include "Pelicula.h"
#include <cmath>

using namespace std;

/*Constructor vacío de la clase Programacion*/
Programacion::Programacion()
{

}

/*Constructor de la clase programación que establece el horario y la película de la programación*/
Programacion::Programacion(Pelicula laPeli, double hInicio, double mInicio, double hFin, double mFin)
{
   laPelicula = laPeli;
   hora_inicio = hInicio;
   min_inicio = mInicio;
   hora_final = hFin;
   min_final = mFin;

}

void Programacion::ingresar_pelicula()
{

}
void Programacion::definir_horario()
{

}

/*Retorna la hora de inicio de la pelicula en formato decimal*/
double Programacion::getHoraInicial()
{
    return (hora_inicio + min_inicio/60);
}

/*Retorna la hora de finalización de la pelicula en formato decimal*/
double Programacion::getHoraFinal()
{
    return (hora_final + min_final/60);
}

/*Retorna la duración de la programacion en formato decimal*/
double Programacion::getDuracion()
{
    double tiempo = (hora_final + min_final/60) - (hora_inicio + min_inicio/60);
    return tiempo;
}

/*Retorna el género de la película contenida en la programación*/
string Programacion::getGenero()
{
    return laPelicula.getGenero();
}

/*Retorna el nombre de la película contenida en la programación*/
string Programacion::getNom()
{
    return laPelicula.getNom();
}

/*Muestra la información de la película y el horario de incio y fin en horas y minutos*/
string Programacion::mostrarPelicula()
{

    string mensaje = "";

    mensaje += "\nNombre: " + laPelicula.getNom();
    mensaje += "\nHora Inicio: " + to_string(floor(hora_inicio)) + ":" + to_string(floor(min_inicio));
    mensaje += "\nHora Fin: " + to_string(floor(hora_final)) + ":" + to_string(floor(min_final));
    mensaje += "\nDuración: " + to_string(floor(getDuracion())) + "\n\n";

    return mensaje;
}

/*Muestra la información de las funciones de una misma película*/
string Programacion::mostrarFuncion()
{

    string mensaje = "";

    mensaje += "\nHora Inicio: " + hora_inicio.to_string("D2") + ":" + to_string(int(min_inicio));
    mensaje += "\nHora Fin: " + to_string(int(hora_final)) + ":" + to_string(int(min_final));
    mensaje += "\nDuración: " + to_string(int(getDuracion())) + "\n\n";
    return mensaje;
}