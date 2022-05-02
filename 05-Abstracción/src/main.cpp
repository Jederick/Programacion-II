#include "becaCinco.h"
#include "becaCuatro.h"
#include "becado.h"

#include <vector>
#include <iostream>

int main(){

    vector<Becado *> becados;

    BecaCuatro* becado1 = new BecaCuatro(500, "Juan Ortíz");
    BecaCinco* becado2 = new BecaCinco(250, "Depresión Soledad");

    becados.push_back(becado1);
    becados.push_back(becado2);

    for(Becado* becado : becados){
        cout << becado->obtenerNombre() << " y su deposito total fue de: " << becado->calculoDeposito() << endl;
    }

    delete becado1;
    delete becado2;

}