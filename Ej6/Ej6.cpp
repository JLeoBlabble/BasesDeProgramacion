#include <iostream>
#include "Ej6.h"
using namespace std;

int punteros() {
    cout << "Punteros de variables:\n";
    punterosVariables();
    cout << "\n";

    cout << "Punteros y arrays:\n";
    punterosArrays();
    cout << "\n";

    cout << "Asignación de memoria:\n";
    asignacionMemoria();
    cout << "\n";

    cout << "Aritmética de los punteros:\n";
    aritmeticaPunteros();
    cout << "\n";

    cout << "Punteros de punteros:\n";
    punterosPunteros();
    cout << "\n";

    cout << "Punteros de funciones:\n";
    punterosFunciones();
    cout << "\n";

    return 0;
}