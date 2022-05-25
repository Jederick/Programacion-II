#include "nodoArbol.h"

NodoArbol::NodoArbol(int nuevoValor, int nuevaId){
    this->id = nuevaId;
    this->valor = nuevoValor;

}

void NodoArbol::insertarHijo(NodoArbol *nuevoHijo){


}

int NodoArbol::obtenerId(){
    return this->id;
}

int NodoArbol::obtenerValor(){
    return this->valor;
}