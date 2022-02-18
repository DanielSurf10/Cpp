#include <iostream>
#include <math.h>

// Assim como classes struct também gera um objeto
// Mas com o padrão public:

struct ponto {
    // public:

    int x;
    int y;

    // Também adimite módulos, assim como classes
    // Construtor
    ponto() : x(0), y(0) {};
    ponto(int Px, int Py) : x(Px), y(Py) {};

    int distancia_2_pontos(ponto P2) {
        return sqrt((pow(P2.x - this->x, 2) + pow(P2.y - this->y, 2)));
    }
};


int main() {
    ponto a, b(1, 2);

    std::cout << a.distancia_2_pontos(b) << std::endl;


    return 0;
}
