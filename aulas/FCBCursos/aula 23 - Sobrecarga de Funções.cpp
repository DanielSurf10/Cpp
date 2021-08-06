#include <iostream>
#include <iomanip>

using namespace std;


int facaAlgo(int);                      // Dobra o valor
int facaAlgo(double);                   // Triplica e retorna int
int facaAlgo(float, float);             // Tira a média


int main() {
    cout << "Dobra: \t\t" << facaAlgo(2) << endl;
    cout << "Triplica: \t" << facaAlgo(5.9) << endl;
    cout << "Média: \t\t" << facaAlgo(7.5, 15.3) << endl;


    return 0;
}


int facaAlgo(int a) {
    return a * 2;
}


int facaAlgo(double a) {
    return a * 3;
}


int facaAlgo(float a, float b) {
    return (a + b) / 2;
}
