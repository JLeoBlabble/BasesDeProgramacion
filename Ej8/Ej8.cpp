#include <iostream>
#include "Ej8.h"
using namespace std;

int constantes() {
    // Uso de constantes simbólicas
    cout << "La edad máxima es: " << MAX_AGE << "\n";
    cout << "El valor de PI es: " << PI << "\n";

    // Llamada a una función void
    imprimirMensaje();

    // Uso de alias de tipo
    ulong numeroGrande = 123456789;
    cout << "Número grande: " << numeroGrande << "\n";

    // Uso de constantes y enumeraciones
    if (COLOR_FAVORITO == AZUL) {
        cout << "El color favorito es azul.\n";
    }

    return 0;
}