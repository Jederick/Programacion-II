#include "becaCinco.h"

BecaCinco::BecaCinco(float reubicacion, string nombre){
    this->reubicacion = reubicacion;
    this->nombre = nombre;
}

float BecaCinco::calculoDeposito(){
    return this->reubicacion;
}

string BecaCinco::obtenerNombre(){
    return "Soy tan chingón que tengo un texto distinto, me llamo: " + this->nombre;
}