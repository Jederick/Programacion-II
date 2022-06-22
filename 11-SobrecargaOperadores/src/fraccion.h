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

    friend ostream& operator << (ostream &salida, const Fraccion *fraccion);
    friend Fraccion* operator + (Fraccion &fraccion1, Fraccion &fraccion2);


};

#endif