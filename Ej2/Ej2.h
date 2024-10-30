#ifndef EJERCICIO2_H
#define EJERCICIO2_H
using namespace std;

class ejercicio2 {
public:
    static int instruccionesPruebasOperadores();
};

// Instrucciones de prueba
inline void instruccionesDePrueba() {
    int edad;
    cout << "Por favor ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }
}

// Operadores
inline void operadores() {
    int a = 10, b = 5;

    cout << "Suma: " << (a + b) << "\n";
    cout << "Resta: " << (a - b) << "\n";
    cout << "Multiplicación: " << (a * b) << "\n";
    cout << "División: " << (a / b) << "\n";
    cout << "Módulo: " << (a % b) << "\n";

    cout << "Igual: " << (a == b) << "\n";
    cout << "Diferente: " << (a != b) << "\n";
    cout << "Menor que: " << (a < b) << "\n";
    cout << "Mayor que: " << (a > b) << "\n";
    cout << "Menor o igual que: " << (a <= b) << "\n";
    cout << "Mayor o igual que: " << (a >= b) << "\n";

    cout << "AND lógico: " << ((a > 0) && (b > 0)) << "\n";
    cout << "OR lógico: " << ((a > 0) || (b > 0)) << "\n";
    cout << "NOT lógico: " << !(a > 0) << "\n";
}


#endif //EJERCICIO2_H