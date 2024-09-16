#include "Cine.h"
#include "Validaciones.h"
#include <iostream>
#include <string>
using namespace std;


//Objeto validaciones para validar los datos ingresados
Validaciones val = Validaciones(); 


/*Funcion para pedir y leer variables de la terminal*/
string Leer(string mensaje)
{
    string aux;
    cout << mensaje;
    getline(cin, aux);

    return aux;
}

/*Constructor vacío de la clase Cine,  inicializa el contador numSalas a 0*/
Cine::Cine()
{
    cantSalas = 0;
}

/*Destructor de la clase Cine*/
Cine::~Cine(){


}

/*Pregunta y establece el precio general de la entrada*/
void Cine::setPrecio_general()
{
    precio_general = stoi(Leer("Introduce el precio general de las boletas: ")); 
}

/*Retorna el precio general de la entrada*/
double Cine::getPrecio_general()
{
    return precio_general;
}

void Cine::consult_por_horario()

{

}

void Cine::consult_por_genero()
{

}

/*Pide al usuario la información de la película y crea el objeto*/
void Cine::ingresar_Pelicula()
{
    int hora_inicio0 = 0, minuto_inicio0 = 0, hora_fin0 = 0, minuto_fin0 = 0;    
    string aux = "", genero = "", nombre = "";

    cout << "Has seleccionado la opción: Ingresar película." << endl;
              
                // Validar y obtener el género de la película
    do{
        genero = Leer("Ingrese el género de la película: ");
                    
        if (!val.validar_genero(genero)) {
            cout << "Género inválido, intente de nuevo: " << endl;
        }
    }while (!val.validar_genero(genero));  //Sigue pidiendo género hasta que sea válido
                

    do{
        nombre = Leer("Ingrese el nombre de la película: ");
        
        if(val.vacio(nombre))
            cout << "Nombre requerido, ingrese el nombre por favor: " << endl;

    }while(val.vacio(nombre));
                
                
                
    // Crea el nuevo objeto película
    Pelicula pelicula(nombre, genero);  //Llama al constructor de la clase Pelicula
    cout << "Película ingresada correctamente." << endl;
}
