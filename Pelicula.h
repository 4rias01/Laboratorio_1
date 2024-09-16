#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
class Pelicula
{
    private:
        string nombre;
        string genero;
        double precio;
    public:
        Pelicula();
        Pelicula(string, string);
        ~Pelicula();
        double calPrecio(double, string);
        string getNombre();
        string getGenero();
};

#else

class Pelicula;

#endif 
