#include <iostream>


int main() {
    int valor;


    // std::cout -> Manda ao stdout uma string, como o printf()
    // std::endl -> Quebra a linha e limpa o buffer
    // std::cout << "O que quiser escrever" << std::endl;

    std::cout << "Digite um valor: ";


    // std::cin -> Recebe algum valor do stdin, como o gets()
    // std::cin >> variavel;

    std::cin >> valor;


    std::cout << "O dobro de " << valor << " é " << valor * 2 << std::endl;


    return 0;
}
