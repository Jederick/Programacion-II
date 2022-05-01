#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{

    private:

    protected:
    string clasificacion;
    int cantidadPatas;
    Animal() {}

    public:
    void caminar();
};

#endif