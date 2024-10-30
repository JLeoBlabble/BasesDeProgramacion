#include <iostream>
#include "Ej5.h"
using namespace std;

int funcionesPrototipos() {
    llamarFunciones();
    gestionDeVariablesLocales();

    cout << "Operación suma: " << operacion(5, 3) << "\n";
    cout << "Operación multiplicación: " << operacion(5.0, 3.0) << "\n";

    cout << "Suma variable: " << sumaVariable(3, 1, 2, 3) << "\n";
    cout << "Suma con valor por defecto: " << sumaConDefecto(5) << "\n";

    cout << "Cuadrado de 4: " << cuadrado(4) << "\n";

    funcionExterna();

    cout << "Factorial de 5: " << factorial(5) << "\n";

    return 0;
}