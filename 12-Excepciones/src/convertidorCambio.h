#ifndef ConvertidorCambio_H
#define ConvertidorCambio_H

#include "calculadora.h"

class ConvertidorCambio{

    private:
    float compra;
    float venta;
    Calculadora *calc;

    public:
    ConvertidorCambio(float compra, float venta, Calculadora *calc);

    float comprar(float cantidad);
    float vender(float cantidad);
};

#endif