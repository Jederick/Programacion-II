#include "Animal.h"
#include "Perro.h"
#include "Delfin.h"
#include <vector>

int main(){

    vector<Animal *> animales;

    Perro* animal1 = new Perro(4, "terrestre");
    Delfin* animal2 = new Delfin(0, "acuatico");

    animales.push_back(animal1);
    animales.push_back(animal2);
}