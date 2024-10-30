#ifndef EJERCICIO5_H
#define EJERCICIO5_H
using namespace std;

class ejercicio5 {
public:
    static int funcionesPrototipos();
};

// Declaración de una función
inline int suma(int a, int b) {
    return a + b;
}

// Funciones y procedimientos
inline int multiplicar(int a, int b) {
    return a * b;
}

inline void imprimirMensaje() {
    cout << "Este es un procedimiento.\n";
}

// Llamada de las funciones
inline void llamarFunciones() {
    int resultadoSuma = suma(5, 3);
    int resultadoMultiplicacion = multiplicar(5, 3);

    cout << "La suma de 5 y 3 es " << resultadoSuma << "\n";
    cout << "La multiplicación de 5 y 3 es " << resultadoMultiplicacion << "\n";

    imprimirMensaje();
}

// Gestión de las variables locales
inline void gestionDeVariablesLocales() {
    int localVar = 10;
    cout << "Variable local: " << localVar << "\n";
}

// Definición de funciones homónimas (polimorfismo)
inline int operacion(int a, int b) {
    return a + b;
}

inline double operacion(double a, double b) {
    return a * b;
}

// Funciones con número variable de argumentos
inline int sumaVariable(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Asignación de valores por defecto a los argumentos
inline int sumaConDefecto(int a, int b = 10) {
    return a + b;
}

// Funciones en línea
inline inline int cuadrado(int x) {
    return x * x;
}

// Funciones externas de tipo C
extern "C" inline void funcionExterna() {
    cout << "Función externa de tipo C.\n";
}

// Funciones recursivas
inline int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

#endif //EJERCICIO5_H