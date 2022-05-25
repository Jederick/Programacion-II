#ifndef ARBOL_H
#define ARBOL_H

#include "nodoArbol.h"
#include <map>

using namespace std;

class Arbol{

    private:
        map<int, NodoArbol*> indiceNodos;
        NodoArbol *raiz;

    public:
    Arbol(int valorNodoRaiz, int idNodo);
    ~Arbol();

    void insertarValor(int nuevoValor, int nuevaIdNodo, int idPadre);

    int obtenerValor(int idNodo);
};

#endif