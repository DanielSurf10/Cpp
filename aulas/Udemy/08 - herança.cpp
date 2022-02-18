#include <iostream>

// Base class
class Circulo {
    public:

        // Construtor padrão
        Circulo(int raio) : raio(raio) {
            std::cout << "Classe Base" << std::endl;
        };

        float getArea() {
            return 3.14 * raio * raio;
        }
    
    protected:
        int raio;
};

class Cilindro : public Circulo {
    public:
        // Contrutor
        Cilindro(int raio, int altura) : Circulo(raio), altura(altura) {
            std::cout << "Classe Cilindro" << std::endl;
        };
    
        float getArea() {
            return 3.14 * raio * raio * altura;
        }
    
    protected:
        int altura;
};

class Cone : public Cilindro {
    public:
        // Contrutor
        Cone(int raio, int altura) : Cilindro(raio, altura) {
            std::cout << "Classe Cone" << std::endl;
        };
    
        float getArea() {
            return 3.14 * raio * raio * altura * 1/3;
        }
};


int main() {
    Cone cone = Cone(1, 1);
    std::cout << cone.getArea() << std::endl;

    Cilindro* cilindro = new Cilindro(1, 1);
    std::cout << cilindro->getArea() << std::endl;


    return 0;
}
