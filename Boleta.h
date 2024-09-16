#ifndef BOLETA_H
#define BOLETA_H


class Boleta
{
    private:
        int cantidad;
        double precio;

    public:
        Boleta();
        void cal_precio();
        virtual ~Boleta();
};
#else
class Boleta
#endif // BOLETA_H
