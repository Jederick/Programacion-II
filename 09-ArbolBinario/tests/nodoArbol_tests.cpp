#include <gtest/gtest.h>
#include "../src/nodoArbol.h"

namespace{

   TEST(Arbol_Test, Test_Inicializar_Arbol){
        
        NodoArbol *nodoArbol = new NodoArbol(1, 1);
        


        int esperado = 1;
        int actual = nodoArbol->obtenerValor();

        EXPECT_EQ(esperado, actual);
    }
}