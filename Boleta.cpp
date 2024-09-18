/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#include "Boleta.h"

/*Constructor de la clase Boleta inicializa el estado de vendida a false*/
Boleta::Boleta()
{
    estado = false;
}

/*Constructor de la clase Boleta inicializa el estado de vendida a false y asigna un numero*/
Boleta::Boleta(int num)
{
    estado = false;
    numero = num;
}

/*Cambia el estado del objeto de falso(no vendido) a verdadero(vendido)*/
void Boleta::vender()
{
    estado = true;
}

/*Devuelve el estado del objeto*/
bool Boleta::getEstado()
{
    return estado;
}


/*Destructor de la clase Boleta*/
Boleta::~Boleta()
{

}
