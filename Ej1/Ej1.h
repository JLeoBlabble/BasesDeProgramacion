#ifndef EJERCICIO1_H
#define EJERCICIO1_H

class ejercicio1 {
public:
    static int declaracionVariables();
};

// Utilidad de las variables
inline void utilidadDeVariables() {
    std::string nombre;
    int edad;

    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;

    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";
}

// Ámbito de las variables
inline int globalVar = 10;

inline void mostrarAmbito() {
    int localVar = 20;
    std::cout << "Variable global: " << globalVar << "\n";
    std::cout << "Variable local: " << localVar << "\n";
}

// Sintaxis de declaración
inline void sintaxisDeDeclaracion() {
    int a = 5;
    double b = 3.14;
    char c = 'A';
    bool d = true;

    if (d) {
        int e = 10;
        std::cout << "Dentro del if: " << e << "\n";
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "Dentro del for: " << i << "\n";
    }
}

// Tipos de datos
inline void tiposDeDatos() {
    int entero = 10;
    double decimal = 3.14;
    char caracter = 'A';
    bool booleano = true;

    std::cout << "Entero: " << entero << "\n";
    std::cout << "Decimal: " << decimal << "\n";
    std::cout << "Caracter: " << caracter << "\n";
    std::cout << "Booleano: " << booleano << "\n";
}


#endif //EJERCICIO1_H