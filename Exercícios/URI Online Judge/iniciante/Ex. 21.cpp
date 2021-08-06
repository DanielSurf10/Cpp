#include <iostream>
#include <iomanip>

using namespace std;

// int   notas[]  = {100, 50, 20, 10, 5, 2};
// float moedas[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

int main() {
    float num;
    int num2;

    cin >> num;

    // Notas
    cout << "NOTAS:" << endl;

    // Nota de 100
    num2 = num / 100;
    num -= num2 * 100;
    cout << num2 << " nota(s) de R$ 100.00" << endl;

    // Nota de 50
    num2 = num / 50;
    num -= num2 * 50;
    cout << num2 << " nota(s) de R$ 50.00" << endl;

    // Nota de 20
    num2 = num / 20;
    num -= num2 * 20;
    cout << num2 << " nota(s) de R$ 20.00" << endl;

    // Nota de 10
    num2 = num / 10;
    num -= num2 * 10;
    cout << num2 << " nota(s) de R$ 10.00" << endl;

    // Nota de 5
    num2 = num / 5;
    num -= num2 * 5;
    cout << num2 << " nota(s) de R$ 5.00" << endl;

    // Nota de 2
    num2 = num / 2;
    num -= num2 * 2;
    cout << num2 << " nota(s) de R$ 2.00" << endl;


    // Moedas
    cout << "MOEDAS:" << endl;

    // 1 real
    cout << num << " moeda(s) de R$ 1.00" << endl;



    return 0;
}
