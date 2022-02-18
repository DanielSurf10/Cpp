#include <iostream>

void inverte(int& num1, int& num2);

int main() {
    int numero1{ 6 }, numero2{ 9 };

    // Antes de mudar
    std::cout << "Números antes de mudar:" << '\n';
    std::cout << "numero1: " << numero1 << '\n';
    std::cout << "numero2: " << numero2 << "\n\n";

    inverte(numero1, numero2);

    // Depois de mudar
    std::cout << "Números depois de mudar:" << '\n';
    std::cout << "numero1: " << numero1 << '\n';
    std::cout << "numero2: " << numero2 << "\n\n";


    return 0;
}

void inverte(int& num1, int& num2) {
    int temp{ num1 };

    num1 = num2;
    num2 = temp;
}

// cd $dir && 
// && g++ \"$fileName\" -o \"$fileNameWithoutExt\" && $dir$fileNameWithoutExt

// g++ \"$dir$fileName\"
