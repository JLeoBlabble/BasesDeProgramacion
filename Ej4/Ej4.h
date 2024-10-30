#ifndef EJERCICIO4_H
#define EJERCICIO4_H

class ejercicio4 {
public:
    static int arrays();
};

// Declaración y uso de arrays
inline void declaracionYUsoDeArrays() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }
    for (int numero : numeros) {
        std::cout << numero << "\n";
    }
}

#endif //EJERCICIO4_H