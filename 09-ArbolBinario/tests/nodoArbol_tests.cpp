#include <gtest/gtest.h>
#include "../src/nodoArbol.h"

namespace{

   TEST(NodoArbol_Test, Test_Inicializar_Nodo){
        
        
        NodoArbol *nodoArbol = new NodoArbol(1, 1);
        
        int esperado = 1;
        int actual = nodoArbol->obtenerValor();

        EXPECT_EQ(esperado, actual);
    }

    TEST(NodoArbol_Test, Test_Crear_Nodo_Hijo){
        
        NodoArbol *nodoPadre = new NodoArbol(1, 1);
        
        NodoArbol *nodoHijoEsperado = new NodoArbol(7,2);
        nodoPadre->insertarHijo(nodoHijoEsperado);

        vector<NodoArbol*> hijos = nodoPadre->obtenerHijos();
        NodoArbol *nodoHijoActual = hijos[0];

        EXPECT_EQ(nodoHijoEsperado, nodoHijoActual);

        delete nodoPadre;
        delete nodoHijoEsperado;
    }
}