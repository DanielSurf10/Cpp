#include <iostream>

// Base class
class Circulo {
    public:

        // Construtor padrão
        Circulo() : raio(0) {}

        Circulo(int raio) : raio(raio) {
            std::cout << "Classe Base" << std::endl;
        }

        void setRaio(int raio) {
            this->raio = raio;
        }

        float getArea() {
            return 3.14 * raio * raio;
        }
    

    private:
        int raio;
};


int main() {



    return 0;
}
