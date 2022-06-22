#include "nodoArbol.h"

NodoArbol::NodoArbol(int nuevoValor, int nuevaId){
    this->id = nuevaId;
    this->valor = nuevoValor;
}

NodoArbol::~NodoArbol(){
    
}

void NodoArbol::insertarHijo(NodoArbol *nuevoHijo){
    this->hijos.push_back(nuevoHijo);
}

vector<NodoArbol *> NodoArbol::obtenerHijos(){
    return this->hijos;
}

int NodoArbol::obtenerId(){
    return this->id;
}

int NodoArbol::obtenerValor(){
    return this->valor;
}