#include <iostream>
#include <iomanip>

using namespace std;

int   notas[]  = {100, 50, 20, 10, 5, 2};
float moedas[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

int main() {
    float num, num3; 
    int num2;

    cin >> num;

    // Notas
    cout << "NOTAS:" << endl;
    cout << fixed;

    for (int i = 0; i < 6; i++) {
        num2 = num / notas[i];
        num -= num2 * notas[i];
        cout << num2 << " notas(s) de R$ " << setprecision(2) << (float)notas[i] << endl;
    }

    // Moedas
    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 5; i++) {
        num2 = num / moedas[i];
        num -= num2 * moedas[i];
        cout << num2 << " moeda(s) de R$ " << setprecision(2) << moedas[i] << endl;
    }

    cout << setprecision(0) << num * 100 << " moeda(s) de R$ " << setprecision(2) << moedas[5] << endl;


    return 0;
}
