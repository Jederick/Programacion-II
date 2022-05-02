#include "becaCuatro.h"

BecaCuatro::BecaCuatro(float gastosCarrera, string nombre){
    this->gastosCarrera = gastosCarrera;
    this->nombre = nombre;
}

float BecaCuatro::calculoDeposito(){
    return gastosCarrera;
}