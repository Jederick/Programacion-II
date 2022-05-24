#ifndef ARBOL_H
#define ARBOL_H

#include "nodoArbol.h"

class Arbol{

    private:
        NodoArbol *raiz;

    public:
    Arbol(int valorNodoRaiz, int idNodo);
    void insertarValor(int nuevoValor, int nuevaIdNodo);
    int obtenerValor(int idNodo);
};

#endif