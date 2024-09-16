#include "Validaciones.h"
#include <string>
using namespace std;

Validaciones::Validaciones(){}

Validaciones::~Validaciones(){}

bool Validaciones::validar_genero(string genero)
{
    if (genero == "comedia")
    {
        return false;
    }

    else if (genero == "drama" )
    {
        return false;
    }
    else if (genero == "romance")
    {
        return false;
    }
    else if (genero == "accion" )
    {
        return false;
    }
    else if (genero == "suspenso") 
    {
        return false;
    }
    else if (genero == "ciencia ficcion") 
    {
        return false;
    }
    else if (genero == "terror") 
    {
        return false;
    }
    else if (genero == "fantasia")
    {
        return false;
    }
    else
        return true;
}

float Validaciones::getParametro(string genero)
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
