#include "Validaciones.h"
#include <string>
using namespace std;

/*Función para convertir strings a minúscula*/
string minus(string dato)
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
    genero = minus(genero);

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
        return true;
}

double Validaciones::getParametro(string genero)
{
    if (genero == "comedia" or genero=="drama")
    {
        return 1.1;
    }
    else if (genero == "romance" or genero =="accion")
    {
        return 1.15;
    }

    else if (genero == "suspenso" or genero=="terror") 
    {
        return 1,18;
    }
    else if (genero == "ciencia ficcion" or genero=="fantasia") 
    {
        return 1.23;
    }
  
    else
        return 0;
}

bool Validaciones::validar_horario(int,int)
{

}

bool Validaciones::vacio(string dato)
{
    if(dato.length == 0)
        return true;
    else
        return false;
}


