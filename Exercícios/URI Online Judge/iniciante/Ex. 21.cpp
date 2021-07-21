#include <iostream>
#include <iomanip>

using namespace std;

int   notas[]  = {100, 50, 20, 10, 5, 2};
float moedas[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};

int main() {
    float num;

    cin >> num;

    cout << fixed;
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        if (num - notas[i] > 0) {
            cout << num / notas[i] << " nota(s) de R$ " << notas[i] << endl;
            num -= notas[i] * num / notas[i];
        }
    }


    return 0;
}
