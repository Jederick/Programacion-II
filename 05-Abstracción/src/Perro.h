#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"
#include <string>

using namespace std;

class Perro : public Animal{

    public:
    Perro(int cantidadPatas, string clasificacion);

};
#endif