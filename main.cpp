/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/

#include "Cine.h"
#include "Validaciones.h"
#include <iostream>



int main()
{
    int opc;
    //Objeto validaciones para validar los datos ingresados
    Validaciones valMain = Validaciones();
    Cine elCine;  // Crear un objeto de la clase Cine

    elCine.bienvenida(); //Mensaje de bienvenida

    elCine.setPrecio_general();  //Pide y establece el precio general

    elCine.ensayo();

    do {
        // Mostrar el menú
        cout << "Menú de opciones:" << endl;
        cout << "1. Ingresar película." << endl;
        cout << "2. Ingresar Sala" << endl;
        cout << "3. Consultar películas por género" << endl;
        cout << "4. Consultar horario película" << endl;
        cout << "5. Salir" << endl;

        // Obtener la opción del usuario
        opc = stoi(valMain.leerNoVacio("Selecciona una opción: "));

        // Utilizamos switch para las diferentes opciones
        switch(opc){
            case 1:
                elCine.ingresarPelicula();
                break;

            case 2:
                elCine.ingresarSala();
                break;

            case 3:
                elCine.consult_por_genero();
                break;

            case 4:
                elCine.consult_por_horario();
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
