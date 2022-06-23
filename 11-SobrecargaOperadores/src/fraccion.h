#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
using namespace std;

class Fraccion{

    private:
    int numerador;
    int denominador;

    public:
    Fraccion(int numerador, int denominador);
    ~Fraccion();

    float toFloat();

    bool operator == (Fraccion &f); // Comparación
    bool operator != (Fraccion &f);
    bool operator < (Fraccion &f);
    bool operator > (Fraccion &f);
    bool operator <= (Fraccion &f);
    bool operator >= (Fraccion &f);

    friend ostream& operator << (ostream &salida, const Fraccion *fraccion);
    friend Fraccion* operator + (Fraccion &fraccion1, Fraccion &fraccion2);
    friend Fraccion* operator + (Fraccion &fraccion1, int entero);


};

#endif