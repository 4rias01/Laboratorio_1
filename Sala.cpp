#include "Sala.h"
#include "Programacion.cpp"


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

Sala::~Sala()
{

}

string Sala::buscarGenero(string genero)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(valSala.minusc(listProgramacion[i].getGenero()) == valSala.minusc(genero))
        {
            mensaje += listProgramacion[i].mostrarPelicula() + "Sala: " + nombre;
        }
    }

    return mensaje;
}

string Sala::buscarNombre(string nombrePeli)
{
    string mensaje = "";

    for(int i = 0; i < 4; i++)
    {   
        if(valSala.minusc(listProgramacion[i].getNom()) == valSala.minusc(nombrePeli))
        {
            mensaje += listProgramacion[i].mostrarFuncion() + "Sala: " + nombre;
        }
    }

    return mensaje;
}

