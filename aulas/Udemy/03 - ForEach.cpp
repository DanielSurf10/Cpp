#include <iostream>

int main() {
    int valores[] {25, 34, 68, 75, 19, 14};

    std::cout << "Valores do vetor" << std::endl;

    // For Each - Para cada : Basicamente o for igual do python
    for (auto i : valores) {
        std::cout << "\t|- " << i << '\n';
    }

    std::cout << "\n\n";

    std::cout << "Valores do vetor" << std::endl;

    // Também pode mandar o vetor direto 
    for (auto i : {25, 34, 68, 75, 19, 14}) {
        std::cout << "\t|- " << i << '\n';
    }


    return 0;
}
