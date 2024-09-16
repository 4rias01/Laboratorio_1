#include "Cine.h"
#include "Validaciones.h"
#include <iostream>
#include <string>
using namespace std;


//Objeto validaciones para validar los datos ingresados
Validaciones val = Validaciones(); 


/*Constructor vacío de la clase Cine,  inicializa el contador numSalas a 0*/
Cine::Cine()
{
    cantSalas = 0;
    cantPeliculas = 0;
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
void Cine::ingresarPelicula()
{
    cout << "Has seleccionado la opción: Ingresar película." << endl;

    if(cantPeliculas < 20)
    {
        int hora_inicio0 = 0, minuto_inicio0 = 0, hora_fin0 = 0, minuto_fin0 = 0;    
        string aux = "", genero = "", nombre = "";

        
                
                    // Validar y obtener el género de la película
        do{
            genero = Leer("Ingrese el género de la película: ");
                        
            if (val.validar_genero(genero) == false) {
                cout << "Género inválido, intente de nuevo: " << endl;
            }
        }while (val.validar_genero(genero) == false);  //Sigue pidiendo género hasta que sea válido
                    

        
        nombre = val.leerNoVacio("Ingrese el nombre de la película: ");
            
        
                    
        // Crea el nuevo objeto película
        Pelicula pelicula(nombre, genero, getPrecio_general());  //Llama al constructor de la clase Pelicula
        cantPeliculas++; //Aumenta en 1 el contador de películas
        cout << "Película ingresada correctamente." << endl;
    }
    else
        cout << "Error: Ya se alcanzó el límite de películas ingresadas" << endl;
    
}

/*Pide al usuario los datos requeridos para ingresar una sala con su programación*/
void Cine::ingresarSala()
{
    cout << "Has seleccionado la Opción: Ingresar Sala." << endl;
    if(cantSalas < 5)
    {
        string nombre, nombrePelicula;
        int hInicio, mInicio, hFin, mFin;

        nombre = val.leerNoVacio("Ingrese nombre de sala: ");

        






    }
    


}
