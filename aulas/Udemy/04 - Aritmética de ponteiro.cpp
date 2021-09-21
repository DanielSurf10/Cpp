#include <iostream>

#define print std::cout
#define quebraLinha std::endl;

int main() {
    int vetor[] {0, 1, 2, 3, 4, 5};
    int *ptrVetor = vetor;

    print << "Vetor: " << vetor << quebraLinha;     // Mostra o endereço de memória do 1º elemento do vetor

    // Podemos varrer o vetor apenas incrementando o valor do endereço do primeiro elemento
    print << "Valores do vetor" << quebraLinha;
    for (int i = 0; i < 5; i++)
        print << *(ptrVetor + i) << quebraLinha;    // ptrVetor + i : não é uma aritmética simples
                                                        // E sim aritmética de ponteiro
                                                        // Ele incrementa o valor segundo o tamanho em bytes do que ele aponta
                                                        // Nesse caso (int) tem 4 bytes
                                                        // Então ptrVetor + 1 é a mesma coisa que ptrVetor + 4 no endereço de memória
                                                        // Se ptrVetor fosse 1000h ficaria 1004h

    print << '\n';         
    print << "Valores do vetor" << quebraLinha;
    for (int i = 0; i < 5; i++)                     // Mas para facilitar, usa a notação de [] que é a mesma coisa
        print << ptrVetor[i] << quebraLinha;
    

    return 0;
}
