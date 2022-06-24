#include "convertidorCambio.h"

ConvertidorCambio::ConvertidorCambio(float _compra, float _venta, Calculadora *_calc){
    this->compra = _compra;
    this->venta = _venta;
    this->calc = _calc;
}

float ConvertidorCambio::comprar(float cantidad){
    return this->calc->dividir(cantidad, this->venta);
}

float ConvertidorCambio::vender(float cantidad){
    return this->calc->multiplicar(cantidad, this->compra);
}

