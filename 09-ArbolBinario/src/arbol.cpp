#include "arbol.h"

Arbol::Arbol(int valorInicial, int nuevaId){
    this->raiz = new NodoArbol(valorInicial, nuevaId);
    this->indiceNodos.insert(pair<int, NodoArbol*>(nuevaId,this->raiz));
}

Arbol::~Arbol(){
    delete this->raiz;
}

void Arbol::insertarValor(int valorNuevo, int nuevaId){
    
}

int Arbol::obtenerValor(int idNodo){
    
    NodoArbol *auxiliar = this->indiceNodos.at(idNodo);
    return auxiliar->obtenerValor();

}