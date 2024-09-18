/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#include "Programacion.h"
#include <cmath>
#include <stdio.h>

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

   for(int i = 0; i < 30; i++)
   {
    listEntradas[i] = Boleta(i+1);
   }

}

int Programacion::contarEntradas()
{
    int disponibles = 0;
    for(int i = 0; i < 30; i++)
    {
        if(listEntradas[i].getEstado() == false)
            disponibles++;
    }

    return disponibles;
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

/*Calcula la duración de la programacion y la retorna en formato de horas y minutos*/
string Programacion::getDuracion()
{
    int horaTotal, minTotal;
    double duracionTotal;

    duracionTotal = (hora_final + (min_final/60)) - (hora_inicio + (min_inicio/60));

    horaTotal = int(duracionTotal);
    minTotal = int((duracionTotal - horaTotal)*60);

    char bufferh[50];
    char bufferm[50];

    sprintf(bufferh, "%02d", horaTotal);
    sprintf(bufferm, "%02d", minTotal);

    string hora(bufferh);
    string min(bufferm);

    string mensaje = hora + " hora(s) " + min + " minuto(s) ";

    return mensaje;
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

    char bufferhI[50];
    char buffermI[50];
    char bufferhF[50];
    char buffermF[50];

    sprintf(bufferhI, "%02d", int(hora_inicio));
    sprintf(buffermI, "%02d", int(min_inicio));
    sprintf(bufferhF, "%02d", int(hora_final));
    sprintf(buffermF, "%02d", int(min_final));

    string hInicio(bufferhI);
    string minInicio(buffermI);
    string hFin(bufferhF);
    string mFin(buffermF);

    mensaje += "\nNombre: " + laPelicula.getNom();
    mensaje += "\nHora Inicio: " + hInicio + ":" + minInicio;
    mensaje += "\nHora Fin: " + hFin + ":" + mFin;
    mensaje += "\nDuración: " + getDuracion();
    mensaje += "\nPrecio: $" + laPelicula.getPrecio();
    mensaje += "\nEntradas disponibles: " + to_string(contarEntradas());
    mensaje += string("\n******************************") + string("\n");

    return mensaje;
}

/*Muestra la información de las funciones de una misma película*/
string Programacion::mostrarFuncion()
{

    string mensaje = "";

    char bufferhI[50];
    char buffermI[50];
    char bufferhF[50];
    char buffermF[50];

    sprintf(bufferhI, "%02d", int(hora_inicio));
    sprintf(buffermI, "%02d", int(min_inicio));
    sprintf(bufferhF, "%02d", int(hora_final));
    sprintf(buffermF, "%02d", int(min_final));

    string hInicio(bufferhI);
    string minInicio(buffermI);
    string hFin(bufferhF);
    string mFin(buffermF);

    mensaje += "\nHora Inicio: " + hInicio + ":" + minInicio;
    mensaje += "\nHora Fin: " + hFin + ":" + mFin;
    mensaje += "\nDuración: " + getDuracion();
    mensaje += "\nPrecio: $" + laPelicula.getPrecio();
    mensaje += "\nEntradas disponibles: " + to_string(contarEntradas());
    mensaje += string("\n******************************") + string("\n");


    return mensaje;
}

/*Muestra toda la información de la película*/
string Programacion::mostrarInfo()
{
    string mensaje = "";

    char bufferhI[50];
    char buffermI[50];
    char bufferhF[50];
    char buffermF[50];

    sprintf(bufferhI, "%02d", int(hora_inicio));
    sprintf(buffermI, "%02d", int(min_inicio));
    sprintf(bufferhF, "%02d", int(hora_final));
    sprintf(buffermF, "%02d", int(min_final));

    string hInicio(bufferhI);
    string minInicio(buffermI);
    string hFin(bufferhF);
    string mFin(buffermF);

    mensaje += "\nNombre: " + laPelicula.getNom();
    mensaje += "\nGénero: " + laPelicula.getGenero();
    mensaje += "\nHora Inicio: " + hInicio + ":" + minInicio;
    mensaje += "\nHora Fin: " + hFin + ":" + mFin;
    mensaje += "\nDuración: " + getDuracion();
    mensaje += "\nPrecio: $" + laPelicula.getPrecio();
    mensaje += "\nEntradas disponibles: " + to_string(contarEntradas());
    mensaje += string("\n******************************") + string("\n");


    return mensaje;
}
