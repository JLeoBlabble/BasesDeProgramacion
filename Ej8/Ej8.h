#ifndef EJERCICIO8_H
#define EJERCICIO8_H
using namespace std;

class ejercicio8 {
public:
    static int constantes();
};

// Constantes simbólicas
const int MAX_AGE = 100;
const double PI = 3.14159;

// Función que utiliza el tipo void
inline void imprimirMensaje() {
    cout << "Este es un mensaje desde una función void.\n";
}

// Alias de tipo con typedef
typedef unsigned long ulong;

// Constantes y enumeraciones
enum Color { ROJO, VERDE, AZUL };
const Color COLOR_FAVORITO = AZUL;

#endif //EJERCICIO8_H