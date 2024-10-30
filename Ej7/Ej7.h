#ifndef EJERCICIO7_H
#define EJERCICIO7_H
using namespace std;

class ejercicio7 {
public:
    static int referencias();
};

// Función que utiliza una referencia como parámetro
inline void incrementar(int &ref) {
    ref++;
}

#endif //EJERCICIO7_H