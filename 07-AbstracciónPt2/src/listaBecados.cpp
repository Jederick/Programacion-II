#include "listaBecados.h"

ListaBecados::~ListaBecados(){
    for(Becado* becado : this->becados ){
        delete becado;
    }
    this->becados.clear();
}

void ListaBecados::agregarBecado(Becado* nuevoBecado){
    this->becados.push_back(nuevoBecado);
}

float ListaBecados::cantidadTotalDepositada(){
    float total = 0;

    for(Becado* becado : this->becados){
        total += becado->calculoDeposito();
    }
    return total;
}