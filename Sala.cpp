/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#include "Sala.h"



using namespace std;

Validaciones valSala = Validaciones();

/*Constructor vacío de la clase Sala*/
Sala::Sala()
{

} 


/*Constructor de la clase Sala que inicializa el nombre*/
Sala::Sala(string nom, Programacion programa[4])
{
    nombre = nom;
    for(int i = 0; i < 4; i++)
        listProgramacion[i] = programa[i];
} 

/*Desructor de la clase Sala*/
Sala::~Sala()
{

}

/*Invoca la función de mostrar info de la película si el genero de la programación coincide con el ingresado*/
string Sala::buscarGenero(string genero)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(valSala.minusc(listProgramacion[i].getGenero()) == valSala.minusc(genero))
        {
            mensaje += listProgramacion[i].mostrarPelicula() + "Sala: " + nombre + "\n\n";
        }
    }

    return mensaje;
}

/*Invoca la función de mostrar info de la película si el nombre de la programación coincide con el ingresado*/
string Sala::buscarNombre(string nombrePeli)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(valSala.minusc(listProgramacion[i].getNom()) == valSala.minusc(nombrePeli))
        {
            mensaje += listProgramacion[i].mostrarFuncion() + "Sala: " + nombre + "\n\n";
        }
    }

    return mensaje;
}

