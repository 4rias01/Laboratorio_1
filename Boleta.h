/*
Juan Diego Cárdenas Mejía 2416437-3743
Santiago Arias Rojas 2416285-3743
Steven Fernando Aragón Alvarez 2418804

FUNDAMENTOS DE PROGRAMACIÓN ORIENTADA A OBJETOS
Prof. Leoviviana Moreno Torres
Laboratorio 1
*/
#ifndef BOLETA_H
#define BOLETA_H



class Boleta
{
    private:
        bool estado;
        int numero;

    public:
        Boleta();
        Boleta(int);
        void vender();
        bool getEstado();
        ~Boleta();
};
#else
class Boleta;
#endif // BOLETA_H
