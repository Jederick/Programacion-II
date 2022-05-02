#include "becaCuatro.h"

BecaCuatro::BecaCuatro(float gastosCarrera, string nombre){
    this->gastosCarrera = gastosCarrera;
    this->nombre = nombre;
}

float BecaCuatro::calculoDeposito(){
    return gastosCarrera;
}

string BecaCuatro::obtenerNombre(){
    return "Soy tan chingon que tengo un texto distinto jasj, y por cierto, llamo: " + this->nombre;
}