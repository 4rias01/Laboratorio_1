#include "Cine.h"
#include "Cine.cpp"
#include "Pelicula.h"
#include "Pelicula.cpp"
#include "Sala.h"
#include "Sala.cpp"
#include "Validaciones.h"
#include "Validaciones.cpp"
#include <iostream>


int main()
{
    int opc;

    Cine elCine;  // Crear un objeto de la clase Cine 
    elCine.setPrecio_general();  //Pide y establece el precio general

    do {
        // Mostrar el menú
        cout << "Menú de opciones:" << endl;
        cout << "1. Ingresar película." << endl;
        cout << "2. Ingresar Sala" << endl;
        cout << "3. Consultar películas por género" << endl;
        cout << "4. Consultar horario película" << endl;
        cout << "5. Salir" << endl;

        // Obtener la opción del usuario
        opc = stoi(Leer("Selecciona una opción: "));

        // Utilizamos switch para las diferentes opciones
        switch(opc){
            case 1:
                elCine.ingresarPelicula();
                break;
            
            case 2:
                elCine.ingresarSala();
                break;
            
            case 3:
                cout << "Has seleccionado la Opción: Consultar películas por género." << endl;
                // Aquí agregar la lógica para consultar películas por género
                break;
            
            case 4:
                cout << "Has seleccionado la Opción: Consultar horario película." << endl;
                // Aquí agregar la lógica para consultar horario de una película
                break;
            
            case 5:
                cout << "Termina la ejecución del programa." << endl;
                break;
            
            default:
                cout << "Opción inválida. Por favor, selecciona un número entre 1 y 5." << endl;
        }

        cout << endl;  // Salto de línea para mejor legibilidad

    }while(opc != 5);  // El programa continúa hasta que el usuario elija salir

return 0;

}
