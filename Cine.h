#ifndef CINE_H
#define CINE_H
#include "Sala.h"



class Cine
{
    private:                              // atributos
        double precio_general;            //atributo que se establece al inicio del programa, es el valor base de la boleteria.
        Sala salasArr[5];                 // se crea un arreglo de objetos tipo "Sala" de tamaño 5.
        Pelicula catalogo[20];            // se crea un arreglo de tamaño 20 que contiene 20 peliculas.
        Pelicula NoPelicula;                
        int cantSalas;                    //atributo que sirve como contador, se suma 1 cada vez que se elige la opcion "ingresar sala".
        int cantPeliculas;                //atributo que sirve como contador, se suma 1 cada vez que se elige la opcion "ingresar pelicula".
    
    public:                               //metodos:
        Cine();                           //constructor vacio.
        ~Cine();                          //destructor.
        void bienvenida();                // imprime un mensaje de bienvenida.
        void setPrecio_general();          //establece el valor de "precio_general".
        void consult_por_horario();        //busca una pelicula en particular e informa cuando se va a proyectar y en que sala.
        void consult_por_genero();         //busca un genero en particular e informa las peliculas existentes de ese genero junto con su programacion.
        double getPrecio_general();         //retorna el "valor_general".
        void ingresarPelicula();            //ingresa una pelicula al catalogo.
        void ingresarSala();                 //ingresa una sala junto con su programacion.
        void ensayo();                       //establece valores pra probar el proyecto.
        Pelicula buscarPelicula(string);    //*Busca una película por nombre del catalogo y retorna el objeto pelicula*/
};

#else
class Cine;
#endif 

