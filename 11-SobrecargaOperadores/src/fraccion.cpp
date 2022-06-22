#include "fraccion.h"

Fraccion::Fraccion(int _numerador, int _denominador){
    this->numerador = _numerador;
    this->denominador = _denominador;
}

Fraccion::~Fraccion(){
}

istream& operator >> (istream &entrada, Fraccion *fraccion){
    return entrada;
}

ostream& operator << (ostream &salida, const Fraccion *fraccion){
    salida << fraccion->numerador << "/" << fraccion->denominador;
    return salida;
}

Fraccion* operator + (Fraccion &fraccion1, Fraccion &fraccion2){
    int nuevoNumerador;
    int nuevoDenominador;
    
    if(fraccion1.denominador  == fraccion2.denominador){
        nuevoDenominador = fraccion1.denominador;
        nuevoNumerador = fraccion1.numerador + fraccion2.numerador;
    }else{
        nuevoDenominador = fraccion1.denominador * fraccion2.denominador;
        nuevoNumerador = (fraccion1.numerador * fraccion2.denominador) + (fraccion1.denominador * fraccion2.numerador);
    }
    Fraccion *fraccion = new Fraccion(nuevoNumerador, nuevoDenominador);
    return fraccion;
}