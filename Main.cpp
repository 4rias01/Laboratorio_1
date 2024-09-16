#include "Cine.h"
#include "Pelicula.h"
#include "Sala.h"
#include "Validaciones.h"


int main() 
{
    int opc = 0, hora_inicio0 = 0, minuto_inicio0 = 0, hora_fin0 = 0, minuto_fin0 = 0;    
    string aux = "", genero0 = "", nombre0 = "", nombre1 = "";

    Validaciones val;  // Crear un objeto de la clase Validacion 
    Cine elCine;  // Crear un objeto de la clase Cine 
    elCine.setPrecio_general();  // se establece el precio general

    do {
        // Mostrar el menú
        cout << "Menú de opciones:" << endl;
        cout << "1. Ingresar película." << endl;
        cout << "2. Ingresar Sala" << endl;
        cout << "3. Consultar películas por género" << endl;
        cout << "4. Consultar horario película" << endl;
        cout << "5. Salir" << endl;

        // Obtener la opción del usuario
        cout << "Selecciona una opción: ";
        getline(cin, aux);
        opc = stoi(aux);

        // Utilizamos switch para las diferentes opciones
        switch(opc){
            case 1:
                cout << "Has seleccionado la Opción: Ingresar película." << endl;
              
                // Validar y obtener el género de la película
                do {
                    cout << "Digite el género de la película (comedia, drama, etc.): ";
                    getline(cin, genero0);
                    
                    if (!val.validar_genero(genero0)) {
                        cout << "Género inválido, intente de nuevo." << endl;
                    }
                } while (!val.validar_genero(genero0));  // Repetir hasta que el género sea válido
                
                cout << "Digite el nombre de la película: ";
                getline(cin, nombre0);
                nombre1 = nombre0;
                
                
                
                // Crear una película
                Pelicula pelicula(nombre0, genero0);  // Cambiar el nombre del objeto
                cout << "Película ingresada correctamente." << endl;
                break;
            
            case 2:
                cout << "Has seleccionado la Opción: Ingresar Sala." << endl;
                // Aquí agregar la lógica para ingresar una sala
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
                break;
        }

        cout << endl;  // Salto de línea para mejor legibilidad

    } while (opc != 5);  // El programa continúa hasta que el usuario elija salir
