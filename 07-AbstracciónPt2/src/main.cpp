#include "becaCinco.h"
#include "becaCuatro.h"
#include "becado.h"

#include "listaBecados.h"
#include <iostream>

int main(){

    ListaBecados* becados = new ListaBecados();

    BecaCuatro* becado1 = new BecaCuatro(500, "Juan Ortíz");
    BecaCinco* becado2 = new BecaCinco(250, "Depresión Soledad");

    becados->agregarBecado(becado1);
    becados->agregarBecado(becado2);

    delete becados;
}