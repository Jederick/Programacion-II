#include "arbol.h"

using namespace std;
int main(){

    Arbol *arbol = new Arbol(2, 1);
    arbol->insertarValor(7,2);
    arbol->insertarValor(5,3);

    return 0;
}