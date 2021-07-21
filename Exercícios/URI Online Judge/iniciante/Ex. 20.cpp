#include <iostream>

using namespace std;

int main() {
    int entrada, dias, messes = 0, anos = 0;

    cin >> entrada;

    if (entrada >= 30) {

        if (entrada >= 360) {
            anos   = entrada / 360;
            messes = (entrada - 365 * anos) / 30;
            dias   = (entrada - 365 * anos) % 30;
        } else {
            messes = (entrada - 365 * anos) / 30;
            dias   = (entrada - 365 * anos) % 30;
        }

    } else {
        dias = entrada;
    }

    cout << anos   << " ano(s)"  << "\n";
    cout << messes << " mes(es)" << "\n";
    cout << dias   << " dia(s)"  << endl;


    return 0;
}
