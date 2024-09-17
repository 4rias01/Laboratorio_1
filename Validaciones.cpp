#include "Validaciones.h"
#include <string>

using namespace std;




/*Constructor vacío de la clase Validaciones*/
Validaciones::Validaciones()
{

}

/*Destructor de la clase Validaciones*/
Validaciones::~Validaciones(){

}

/*Función para convertir strings a minúscula*/
string Validaciones::minusc(string dato)
{
    for(int i = 0; i < dato.length(); i++)
    {
        dato[i] = tolower(dato[i]);
    }

    return dato;
}

/*Función para capitalizar primera letra de strings*/
string Validaciones::capital(string dato)
{
   dato[0] = toupper(dato[0]);

   for(int i = 1; i < dato.length(); i++)
    dato[i] = tolower(dato[i]);
    
    return dato;
}

/*Funcion para pedir y leer variables de la terminal*/
string Validaciones::Leer(string mensaje)
{
    string aux;
    cout << mensaje;
    getline(cin, aux);

    return aux;
}

/*validación de género de película válido*/
bool Validaciones::validar_genero(string genero)
{
    genero = minusc(genero);

    if (genero == "comedia"
    or genero == "drama"
    or genero == "romance"
    or genero == "accion"
    or genero == "suspenso"
    or genero == "ciencia ficcion"
    or genero == "terror"
    or genero == "fantasia")
        return true;
    else
        return false;
}


bool Validaciones::vacio(string dato)
{
    if(dato.length() == 0)
        return true;
    else
        return false;
}

string Validaciones::leerNoVacio(string mensaje)
{
    string aux;

    do{
        aux = Leer(mensaje);
        if(vacio(aux) == true)
            cout << "Dato requerido!" << endl;
    }while(vacio(aux) == true);

    return aux;
}

double Validaciones::leerNoVacioNoCero(string mensaje)
{
    string aux;

    do{
        aux = Leer(mensaje);
        if(vacio(aux) == true)
            cout << "Dato requerido!" << endl;
        else if(stod(aux) <= 0)
            cout << "Inválido! El valor debe ser positivo!" << endl;

    }while((vacio(aux) == true) or (stod(aux) <= 0));

    return stod(aux);
}

/*Valida las condiciones mínima de horario de programación, de duración y dentro del tiempo de apertura del cine*/
bool Validaciones::validar_hora(double hIncial, double mInicial, double hFinal, double mFinal)
{
    double inicial = 0, final = 0;

    inicial = hIncial + (mInicial)/60;
    final = hFinal + (mFinal)/60;

    if(inicial <= 7.5 or final >= 22.5)
    {
        cout << "Horario de programación por fuera de horario del Cine!" << endl;
        return false;
    }
    else if((final - inicial) < (10/60))
    {
        cout << "Duración de película inválida" << endl;
        return false;
    }
    else
        return true;
}

/*Valida que los horarios de dos programaciones no se sobrelapen*/
bool Validaciones::comparar_hora(double hInicial, double mInicial, double hFinal, double mFinal, Programacion comparacion, int llave)
{
    double inicial = 0, final = 0;
    double compInicial = comparacion.getHoraInicial();
    double compFinal = comparacion.getHoraFinal();

    inicial = hInicial + (mInicial)/60;
    final = hFinal + (mFinal)/60;
    
    if(((inicial >= compInicial) and (inicial <= compFinal)) or
    ((final >= compInicial) and (final <= compFinal)))
    {
        cout << "Horario no disponible, ocupado por programación #" << (llave + 1) << endl;
        return false;
    }
    else
        return true;
        

}

/*Válida que el nombre y género reicbidos coincidan con alguna película del catalogo*/
bool Validaciones::validar_pelicula(string nombre, string genero, Pelicula Pelis[], int cantPelis)
{
    nombre = minusc(nombre);
    genero = minusc(genero);

    for(int i = 0;  i < cantPelis; i++)
    {
        if((minusc(Pelis[i].getNom()) == nombre) and
        (minusc(Pelis[i].getGenero()) == genero))
            return true;
    }

    return false;
}

double Validaciones::leerHora(string mensaje)
{
    string aux;

    do
    {
        aux = leerNoVacio(mensaje);
        if(stod(aux) < 0 or stod(aux) >= 24)
            cout << "Valor de hora inválido!" << endl;

    }while(stod(aux) < 0 or stod(aux) >= 24);

    return stod(aux);
}

double Validaciones::leerMinuto(string mensaje)
{
    string aux;
    do
    {
        aux = leerNoVacio(mensaje);
        if(stod(aux) < 0 or stod(aux) >= 60)
            cout << "Valor de minuto inválido!" << endl;

    }while(stod(aux) < 0 or stod(aux) >= 60);

    return stod(aux);
}
