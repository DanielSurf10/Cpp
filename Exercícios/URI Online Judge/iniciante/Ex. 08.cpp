#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int nun_func, horas;
    float valorPHora, salario;

    cin >> nun_func >> horas >> valorPHora;

    salario = horas * valorPHora;

    cout << "NUMBER = " << nun_func << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;


    return 0;
}
