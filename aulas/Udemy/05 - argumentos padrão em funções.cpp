#include <iostream>

// Os argunetos padrão devem ser os últimos arguntos
// parâmetros com argumentos padrão devem ser declarados na primeira ocorrência da declaração da função
// Ou seja, no protótipo, podendo também estar na implementação
// Mas sem que tenha um protótipo
int soma(int a, int b = 0);

int main() {
    std::cout << "A soma é: " << soma(5, 6) << std::endl;
    std::cout << "A soma é: " << soma(8) << std::endl;


    return 0;
}

int soma(int a, int b) {
    return a + b;
}
