#include "Cine.h"
#include <iostream>
#include <string>
using namespace std;

Cine::Cine(){}
Cine::~Cine(){}

void Cine::setPrecio_general()// Obtener el precio general 
{
    string aux="";
    cout << "Introduce el precio general: ";
    getline(cin, aux);
    precio_general = stoi(aux);  
}

float Cine::getPrecio_general()//conocer el precio general
{
    return precio_general;
}

void Cine::consult_por_horario()

{

}

void Cine::consult_por_genero()
{

}
