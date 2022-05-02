#ifndef BECADO_H
#define BECADO_H
#include <string>

using namespace std;

class Becado{

    protected:
    string nombre;
    

    public:
    virtual float calculoDeposito() = 0;
    virtual string obtenerNombre();
};

#endif