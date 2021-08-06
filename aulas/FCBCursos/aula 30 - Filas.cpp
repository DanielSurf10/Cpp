#include <iostream>
#include <queue>

using namespace std;

int main() {
    int valores[] = {1, 3, 5, 8, 13};
    queue <int> fila;

    for (int i = 0; i < 5; i++) {
        fila.push(valores[i]);
    }

    cout << "Tamanho da fila:  " << fila.size()  << endl;
    cout << "Primeiro da fila: " << fila.front() << endl;
    cout << "Último da fila:   " << fila.back()  << endl << '\n';

    cout << "Fila:" << endl;
    while (!fila.empty()) {
        cout << "|-> " << fila.front() << endl;
        fila.pop();
    }


    return 0;
}
