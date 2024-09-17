#include "Sala.h"
#include "Programacion.cpp"


using namespace std;

Sala::Sala()
{

} 

Sala::~Sala()
{

}

string Sala::buscarPelicula(string genero, string nombre)
{
    string mensaje = "", generoAux = "", nombreAux = "";

    for(int i = 0; i < 4; i++)
    {   
        if(genero == "")
            generoAux = listProgramacion[i].getGenero();
        else
            generoAux = genero;

        if(nombre == "")
            nombreAux = listProgramacion[i].getNom();
        else
            nombreAux = nombre;

        if(listProgramacion[i].getGenero() == generoAux and listProgramacion[i].getNom() == nombreAux)
        {
            mensaje += listProgramacion[i].mostrarPelicula() + "Sala: " + nombre;
        }
    }

    return mensaje;
}


