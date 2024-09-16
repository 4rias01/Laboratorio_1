#ifndef VALIDACIONES_H
#define VALIDACIONES_H

class Validaciones
{
    private:
        float parametro;

    public:
        Validaciones();
        ~Validaciones();
        bool validar_genero(string);
        bool validar_horario(int,int);
        float getParametro(string);

};

#else
class Validaciones;


#endif 
