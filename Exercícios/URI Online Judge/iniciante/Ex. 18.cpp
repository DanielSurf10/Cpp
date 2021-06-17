#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int valor, num;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    cin >> valor;

    cout << valor << endl;

    for (int i = 0; i < 7; i++) {
        num = valor / cedulas[i];
        valor = num > 0 ? valor - num * cedulas[i] : valor;
        cout << num << " notas(s) de R$ " << cedulas[i] << ",00" << endl;
    }


    return 0;
}
