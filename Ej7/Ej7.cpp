#include <iostream>
#include "Ej7.h"
using namespace std;

int referencias() {
    // Declaración de una variable
    int numero = 10;

    // Declaración de una referencia a la variable
    int &refNumero = numero;

    // Imprimir el valor original
    cout << "Valor original: " << numero << "\n";

    // Incrementar el valor usando la referencia
    incrementar(refNumero);

    // Imprimir el valor después de incrementar
    cout << "Valor después de incrementar: " << numero << "\n";

    return 0;
}