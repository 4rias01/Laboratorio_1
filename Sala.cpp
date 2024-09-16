#include "Sala.h"
#include <iostream>
#include <string>

using namespace std;

Sala::Sala() {}  // Constructor por defecto
Sala::~Sala() {} // Destructor

void Sala::Programacion(Pelicula _pelicula, int _hora_inicio, int _minuto_inicio, int _hora_fin, int _minuto_fin)
// Establecer el horario de la película
{
    hora_inicio = _hora_inicio;
    minuto_inicio = _minuto_inicio;
    hora_fin = _hora_fin;
    minuto_fin = _minuto_fin;
}

void Sala::getProgramacion(Pelicula _pelicula)
// Mostrar la programación de la película
{
    cout << "Programación de la película '" << _pelicula.getNombre() << "':" << endl;
    cout << "Hora de inicio: " << hora_inicio << ":" << minuto_inicio << endl;
    cout << "Hora de fin: " << hora_fin << ":" << minuto_fin << endl;
}
