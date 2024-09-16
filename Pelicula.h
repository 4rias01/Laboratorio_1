#ifndef PELICULA_H
#define PELICULA_H
using namespace std;
class Pelicula
{
    private:
        string nombre;
        string genero;
        float precio;
    public:
        Pelicula();
        Pelicula( string, string);
        ~Pelicula();
        float calprecio(float, string);
        string getNombre();
        string getGenero();
};

#else

class Pelicula;

#endif 
