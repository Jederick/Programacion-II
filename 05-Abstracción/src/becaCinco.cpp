#include "becaCinco.h"

BecaCinco::BecaCinco(float reubicacion, string nombre){
    this->reubicacion = reubicacion;
    this->nombre = nombre;
}

float BecaCinco::calculoDeposito(){
    return this->reubicacion;
}
