#ifndef EJERCICIO3_H
#define EJERCICIO3_H

class ejercicio3 {
public:
    static int instruccionesBucle();
};

// Bucle for
inline void bucleFor() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }
}

// Bucle while
inline void bucleWhile() {
    int numero;
    std::cout << "Por favor ingresa un número: ";
    std::cin >> numero;

    int i = 1;
    while (i <= 10) {
        std::cout << numero << " x " << i << " = " << (numero * i) << "\n";
        i++;
    }
}

// Bucle do-while
inline void bucleDoWhile() {
    int numero;
    std::cout << "Por favor ingresa un número: ";
    std::cin >> numero;

    int i = 1;
    do {
        std::cout << numero << " x " << i << " = " << (numero * i) << "\n";
        i++;
    } while (i <= 10);
}

// Instrucciones de salto
inline void instruccionesDeSalto() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        std::cout << i << "\n";
    }
}

#endif //EJERCICIO3_H