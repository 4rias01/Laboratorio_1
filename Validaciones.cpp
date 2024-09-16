#include "Validaciones.h"
#include <string>

using namespace std;

/*Función para convertir strings a minúscula*/
string minusc(string dato)
{
    for(int i = 0; i < dato.length(); i++)
    {
        dato[i] = tolower(dato[i]);
    }

    return dato;
}

/*Constructor vacío de la clase Validaciones*/
Validaciones::Validaciones()
{

}

/*Destructor de la clase Validaciones*/
Validaciones::~Validaciones(){}


/*validación de género de película válido*/
bool Validaciones::validar_genero(string genero)
{
    genero = minusc(genero);

    if (genero == "comedia"
    or genero == "drama"
    or genero == "romance"
    or genero == "accion"
    or genero == "suspenso"
    or genero == "ciencia ficcion"
    or genero == "terror"
    or genero == "fantasia")
        return true;
    else
        return false;
}


bool Validaciones::validar_horario(int,int)
{
    return true;
}

bool Validaciones::vacio(string dato)
{
    if(dato.length() == 0)
        return true;
    else
        return false;
}


