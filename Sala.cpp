#include "Sala.h"
#include "Programacion.cpp"


using namespace std;


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

Sala::~Sala()
{

}

string Sala::buscarGenero(string genero)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(val.minusc(listProgramacion[i].getGenero()) == val.minusc(genero))
        {
            mensaje += listProgramacion[i].mostrarPelicula() + "Sala: " + nombre + "\n\n";
        }
    }

    return mensaje;
}

string Sala::buscarNombre(string nombrePeli)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(val.minusc(listProgramacion[i].getNom()) == val.minusc(nombrePeli))
        {
            mensaje += listProgramacion[i].mostrarFuncion() + "Sala: " + nombre + "\n\n";
        }
    }

    return mensaje;
}

