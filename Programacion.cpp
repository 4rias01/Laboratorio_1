#include "Programacion.h"
#include "Pelicula.h"
#include <cmath>

using namespace std;

Programacion::Programacion()
{
  cant_peliculas = 0;
}


void Programacion::ingresar_pelicula()
{

}
void Programacion::definir_horario()
{

}

void Programacion::getHorario()
{

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
    double minInicio, minFinal;
    int hInicio, hFinal;
    string mensaje = "";

    minInicio = fmod(hora_inicio, 1)*60;
    hInicio = floor(hora_inicio);

    minFinal = fmod(hora_final, 1)*60;
    hFinal = floor(hora_final);

    mensaje += "\nNombre: " + laPelicula.getNom();
    mensaje += "\nHora Inicio: " + to_string(hInicio) + ":" + to_string(minInicio);
    mensaje += "\nHora Fin: " + to_string(hFinal) + ":" + to_string(minFinal) + "\n";

    return mensaje;
}
