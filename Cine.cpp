#include "Cine.h"
#include "Validaciones.h"
#include <iostream>
#include <string>
#include <iomanip> 
#include <iostream> 

using namespace std;


//Objeto validaciones para validar los datos ingresados
Validaciones val = Validaciones(); 


/*Constructor vacío de la clase Cine,  inicializa el contador numSalas a 0*/
Cine::Cine()
{
    cantSalas = 0;
    cantPeliculas = 0;
    NoPelicula = Pelicula("Nada");
}

/*Destructor de la clase Cine*/
Cine::~Cine()
{


}

void Cine:: ensayo()
{
    catalogo[0] = Pelicula("Ramona", "Romance", precio_general);
    catalogo[1] = Pelicula("Bala", "Accion", precio_general);
    catalogo[2] = Pelicula("Simon", "Comedia", precio_general);
    catalogo[3] = Pelicula("Solecito", "Drama", precio_general);
    catalogo[4] = Pelicula("Marta", "Comedia", precio_general);
    catalogo[5] = Pelicula("Sara", "Comedia", precio_general);

    cantPeliculas = 6;

    Programacion programaEnsayo[4];

    programaEnsayo[0] = Programacion(catalogo[0], 14, 0, 25, 0);
    programaEnsayo[1] = Programacion(catalogo[1], 10, 0, 11, 0);
    programaEnsayo[2] = Programacion(catalogo[2], 12, 0, 13, 0);
    programaEnsayo[3] = Programacion(catalogo[3], 14, 0, 16, 0);

    salasArr[0] = Sala("Prueba" , programaEnsayo);

    cantSalas++;

}

/*Mensaje de bienvenida al software*/
void Cine::bienvenida()
{
    cout << "Bienvenido al software de administración del Cine!" << endl;
}

/*Pregunta y establece el precio general de la entrada*/
void Cine::setPrecio_general()
{
    precio_general = val.leerNoVacioNoCero("Introduce el precio general de las boletas: "); 
}

/*Retorna el precio general de la entrada*/
double Cine::getPrecio_general()
{
    return precio_general;
}

/*Busca una película por nombre del catalogo y retorna el objeto pelicula*/
Pelicula Cine::buscarPelicula(string nombre)
{
    for(int i = 0; i < cantPeliculas; i++)
    {
        if((val.minusc(nombre)) == val.minusc(catalogo[i].getNom()))
            return catalogo[i];
    }
    
    return NoPelicula;
}

void Cine::consult_por_horario()
{
    string nombrePeli = "", mensaje = "";

    cout << "Has seleccionado la Opción: Consultar horario película" << endl;

    nombrePeli = val.leerNoVacio("Ingrese el nombre de la película: ");

    if(buscarPelicula(nombrePeli).getNom() == "Nada")
        cout << "Película no disponible en el catálogo." << endl;
    else{
        for(int i = 0; i < cantSalas; i++)
        {
            mensaje += salasArr[i].buscarNombre(nombrePeli);
        }
        
        if(val.vacio(mensaje) == true)
        {
            cout << "Actualmente no se proyecta la película " << nombrePeli << endl;
            cout << "Lo sentimos :c" << endl;
        }
        else
        {
            cout << "\nLa película " << nombrePeli << " tiene las siguientes funciones: " << endl;
            cout << mensaje;
        }

    }

}

void Cine::consult_por_genero()
{
    string genero = "";
    string mensaje = "";

    cout << "Has seleccionado la Opción: Consultar películas por género" << endl;

    do
    {
        genero = val.leerNoVacio("Digite el género a buscar: ");
        if(val.validar_genero(genero) == false)
            cout << "Género inválido, intente de nuevo: " << endl;

    }while(val.validar_genero(genero) == false);

    for(int i = 0; i < cantSalas; i++)
    {
        mensaje += salasArr[i].buscarGenero(genero);
    }
    
    if(val.vacio(mensaje) == true)
    {
        cout << "Actualmente no se proyectan películas del género " << genero << endl;
        cout << "Lo sentimos:c" << endl;
    }
    else
    {
        cout << "\nPelículas de " << val.capital(genero) << ": " << endl;
        cout << mensaje;
    }

}

/*Pide al usuario la información de la película y crea el objeto*/
void Cine::ingresarPelicula()
{
    cout << "Has seleccionado la opción: Ingresar película." << endl;

    if(cantPeliculas < 20)
    { 
        string aux = "", genero = "", nombre = "";

        do
        {
                
                    // Validar y obtener el género de la película
            do{
                genero = val.leerNoVacio("Ingrese el género de la película: ");
                            
                if (val.validar_genero(genero) == false) {
                    cout << "Género inválido, intente de nuevo: " << endl;
                }
            }while (val.validar_genero(genero) == false);  //Sigue pidiendo género hasta que sea válido
        
        
            nombre = val.leerNoVacio("Ingrese el nombre de la película: ");
            if(val.validar_pelicula(nombre, genero, catalogo, cantPeliculas) == true)
                cout << "Película ya existente!" << endl;

        }while(val.validar_pelicula(nombre, genero, catalogo, cantPeliculas) == true);
        
        

                    
        // Crea el nuevo objeto película
        catalogo[cantPeliculas] = Pelicula(val.capital(nombre), val.capital(genero), precio_general);  //Llama al constructor de la clase Pelicula y lo almacena en el cátalogo del cine
        cantPeliculas++; //Aumenta en 1 el contador de películas
        cout << "Película ingresada correctamente!" << endl;
    }
    else
        cout << "Error: Ya se alcanzó el límite de películas ingresadas!" << endl;
    
}

/*Pide al usuario los datos requeridos para ingresar una sala con su programación*/
void Cine::ingresarSala()
{
    cout << "Has seleccionado la Opción: Ingresar Sala" << endl;
    if(cantSalas < 5)
    {
        //Variables de almacenamiento de los datos ingresados
        string nombre, nombrePelicula;
        int hInicio, mInicio, hFin, mFin;
        Programacion programa[4];

       //Lectura al usuario de la variable nombre 
        nombre = val.leerNoVacio("Ingrese nombre de sala: ");

        cout << "Ingreso de programación de Sala " << nombre << endl;

        bool horarioValido = true;

        for(int i = 0; i < 4; i++)
        {
            do
            {
                nombrePelicula = val.leerNoVacio("Ingrese el nombre de la película # " + to_string(i+1) + ": ");
                if(buscarPelicula(nombrePelicula).getNom() == "Nada")
                    cout << "Película no hallada!" << endl;

            }while(buscarPelicula(nombrePelicula).getNom() == "Nada");
            

            
            do
            {
                hInicio = val.leerHora("Ingrese la hora de inicio de la programación #" + to_string(i+1) + ": ");

                mInicio = val.leerMinuto("Ingrese los minutos de inicio de la programación #" + to_string(i+1)+ ": ");

                hFin = val.leerHora("Ingrese la hora de finalización de la programación #" + to_string(i+1) + ": ");

                mFin = val.leerMinuto("Ingrese los minutos de finalización de la programación #" + to_string(i+1) + ": ");

                programa[i] = Programacion(buscarPelicula(nombrePelicula), hInicio, mInicio, hFin, mFin);

                horarioValido = val.validar_hora(hInicio, mInicio, hFin, mFin);

                if((i > 0) and (horarioValido == true))
                {
                    for(int j = 0; j < i; j++)
                    {
                        horarioValido = horarioValido*val.comparar_hora(hInicio, mInicio, hFin, mFin, programa[j], j);
                    }
                }

            }while(horarioValido == false);

            
            cout << "\nSe ingresó con éxito la película: " << endl;
            cout << programa[i].mostrarPelicula();

        }

        salasArr[cantSalas] = Sala(nombre, programa);

        cantSalas++; //Aumento del número de salas
    }
    else
        cout << "Número máximo de salas alcanzado!" << endl;


}
