#ifndef CUENTA_PALABRAS_H
#define CUENTA_PALABRAS_H

#include <istream>
#include <sstream>
 
using namespace std;

class CuentaPalabras{

    private:
    istream *streamEntrada;

    public:
    CuentaPalabras(istream *streamEntradaNuevo);

    int contarPalabras();
};

#endif