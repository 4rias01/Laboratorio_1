#include "Cine.h"
#include <iostream>
#include <string>
using namespace std;

/*Constructor vacío de la clase Cine,  inicializa el contador numSalas a 0*/
Cine::Cine(){
    cantSalas = 0;
}

/*Destructor de la clase Cine*/
Cine::~Cine(){


}

void Cine::setPrecio_general()// Obtener el precio general 
{
    string aux;
    cout << "Introduce el precio general de las boletas: ";
    getline(cin, aux);
    precio_general = stoi(aux); 
}

double Cine::getPrecio_general()//conocer el precio general
{
    return precio_general;
}

void Cine::consult_por_horario()

{

}

void Cine::consult_por_genero()
{

}
