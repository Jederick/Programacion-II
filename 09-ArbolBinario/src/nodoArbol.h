#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

#include <vector>

using namespace std;

class NodoArbol{

    private:
    int id;
    int valor;
    vector<NodoArbol> *hijos;

    public:
    NodoArbol(int valor, int id);
    void insertarHijo(NodoArbol *nuevoHijo);

};

#endif