#ifndef LISTABECADOS_H
#define LISTABECADOS_H

#include <vector>
#include "becado.h"
using namespace std;

class ListaBecados{

    private:
    vector<Becado*> becados;

    public:
    void agregarBecado(Becado* nuevoBecado);
    float cantidadTotalDepositada();
    ~ListaBecados();

};

#endif