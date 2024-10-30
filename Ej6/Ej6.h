#ifndef EJERCICIO6_H
#define EJERCICIO6_H
using namespace std;

class ejercicio6 {
public:
    static int punteros();
};

// Punteros de variables
inline void punterosVariables() {
    int numero = 10;
    double decimal = 3.14;

    int *ptrNumero = &numero;
    double *ptrDecimal = &decimal;

    cout << "Valor original de numero: " << numero << "\n";
    cout << "Valor original de decimal: " << decimal << "\n";

    *ptrNumero = 20;
    *ptrDecimal = 6.28;

    cout << "Valor modificado de numero: " << numero << "\n";
    cout << "Valor modificado de decimal: " << decimal << "\n";
}

// Punteros y arrays
inline void punterosArrays() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "Array original: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;
    }

    cout << "Array modificado: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Asignación de memoria
inline void asignacionMemoria() {
    int *ptr = new int;
    *ptr = 42;

    cout << "Valor asignado dinámicamente: " << *ptr << "\n";

    delete ptr;
}

// Aritmética de los punteros
inline void aritmeticaPunteros() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Aritmética de punteros:\n";
    for (int i = 0; i < 5; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << "\n";
    }
}

// Punteros de punteros
inline void punterosPunteros() {
    int numero = 10;
    int *ptr = &numero;
    int **ptrPtr = &ptr;

    cout << "Valor de numero: " << numero << "\n";
    cout << "Valor usando puntero: " << *ptr << "\n";
    cout << "Valor usando puntero a puntero: " << **ptrPtr << "\n";
}

// Punteros de funciones
inline void imprimirMensaje() {
    std::cout << "Hola desde una función!\n";
}

inline void punterosFunciones() {
    void (*ptrFuncion)() = imprimirMensaje;
    ptrFuncion();
}

#endif //EJERCICIO6_H