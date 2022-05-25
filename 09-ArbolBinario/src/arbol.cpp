#include "arbol.h"

Arbol::Arbol(int valorInicial, int nuevaId){
    this->raiz = new NodoArbol(valorInicial, nuevaId);
    this->indiceNodos.insert(pair<int, NodoArbol*>(nuevaId,this->raiz));
}

Arbol::~Arbol(){
    delete this->raiz;
}

void Arbol::insertarValor(int valorNuevo, int nuevaId, int idPadre){
    NodoArbol *nuevoHijo = new NodoArbol(valorNuevo, nuevaId);
    NodoArbol *nodoPadre = this->indiceNodos.at(idPadre);

    nodoPadre->insertarHijo(nuevoHijo);

    this->indiceNodos.insert(pair<int, NodoArbol*>(nuevaId, nuevoHijo) );
}

int Arbol::obtenerValor(int idNodo){
    
    NodoArbol *auxiliar = this->indiceNodos.at(idNodo);
    return auxiliar->obtenerValor();

}