#include <iostream>

int main() {
    // Referência
    int num{ 4 };           // Váriavel int normal
    int& refNum{ num };     // Refêrencia, apelido (alias) para num

    // Ponteiro
    int num2{ 8 };          // Váriavel int
    int* pNum{ & num2 };    // Ponteiro apontado em num

    // Semelhanças
    //      Ambas referenciam uma variável dentro de si.

    // Diferenças
    //      Ponteiro *
    //      Ponteiro é uma variável, entretanto, armazena em si um endereço de memória de outra variável.
    //      Possuí também um endereço de memória e é mutável, por ser uma variável.
    //      É necessário referencia-lo com "&" e desreferencia-lo com "*".
    //
    //      Referência &
    //      Referência não é uma váriavel, ela fica responsável apenas por dar um apelido (alias), um
    //      outro nome para a variável o qual está referenciando.
    //      Não possuí um local na próprio na memória, por não ser uma variável, o seu endereço é o da 
    //      variável no qual está referenciando.
    //      Não é mutavel, e pode se dizer que ela é um ponteiro constante, além de não precisar 
    //      Desreferenciar com "*" por não ser um ponteiro.


    // Mostrando os valor das variáveis
    std::cout << "Valor de num:  " << num << std::endl;
    std::cout << "Valor de num2: " << num2 << "\n" << std::endl;

    // Mudando os valores por referência
    refNum = 12;                            // Não precisa desreferencia-lo
    *pNum  = 26;                            // Precisa desreferencia-lo

    // Mostrando os valor das variáveis depois de mudar
    std::cout << "\nNovos valores" << std::endl;
    std::cout << "Valor de num:  " << num << std::endl;
    std::cout << "Valor de num2: " << num2 << "\n" << std::endl;

    // Endereço de variável de cada um
    std::cout << "\nEndereço de váriavel" << std::endl;
    std::cout << "num:     " << &num << std::endl;
    std::cout << "num2:    " << &num2 << std::endl;
    std::cout << "refNum:  " << &refNum << std::endl;
    std::cout << "pNum:    " << &pNum << std::endl;



    return 0;
}
