#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 34.1415926535897932384626433;
    int x = 27;
 
    // Formatar o número para ocupar um determinado espaço em carateres
    cout << "Numero minimo de carateres:" << endl;
    cout << setw(5) << x << endl;
    cout << setw(1) << x << endl;
    cout << setw(10) << pi << endl;
    cout << setw(3) << pi << endl;
    cout << endl;
 
    // Formatar geral da precisão em números de vírgula flutuante
    cout << "Formatacao geral da precisao em numeros de virgula flutuante:" << endl;
    cout << setprecision(0) << pi << endl;
    cout << setprecision(1) << pi << endl;
    cout << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << endl;
    cout << setprecision(4) << pi << endl;
    cout << setprecision(5) << pi << endl;
    cout << endl;
 
    // Formatar fixa da precisão em números de vírgula flutuante
    cout << "Formatacao fixa da precisao em numeros de virgula flutuante:" << endl;
    cout << fixed;
    cout << setprecision(0) << pi << endl;
    cout << setprecision(1) << pi << endl;
    cout << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << endl;
    cout << setprecision(4) << pi << endl;
    cout << setprecision(5) << pi << endl;
    cout << endl;
 
    // Combinado as duas anteriores
    cout << "Combinado as duas anteriores:" << endl;
    cout << fixed << setw(8) << setprecision(4) << pi << endl;
    cout << fixed << setw(6) << setprecision(3) << pi << endl;
    cout << fixed << setw(10) << setprecision(6) << pi << endl;
    cout << endl;
 
    return 0;
