#include "Sala.h"
#include "Programacion.cpp"


using namespace std;

Sala::Sala()
{

} 

Sala::~Sala()
{

}

string Sala::buscarGenero(string genero)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {
        if(listProgramacion[i].getGenero() == genero)
        {
            mensaje += listProgramacion[i].mostrarPelicula() + "Sala: " + nombre;
        }
    }

    return mensaje;
}


