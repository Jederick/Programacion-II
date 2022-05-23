#include "cuentaPalabras.h"

CuentaPalabras::CuentaPalabras(istream *streamEntradaNuevo){
    this->streamEntrada = streamEntradaNuevo;
}

int CuentaPalabras::contarPalabras(){
    
    int cantPalabras = 0;
    string linea = "";
    string palabra = "";

    while(getline(*(this->streamEntrada), linea )){

        istringstream stream(linea);
        
        while(stream >> palabra){
                cantPalabras++;
        }
    }

    return cantPalabras;
}