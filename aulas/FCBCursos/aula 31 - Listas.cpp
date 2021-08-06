#include <iostream>
#include <list>

using namespace std;

int main() {
    int valores[] = {0, 3, 8, 5, 2, 7, 6, 9, 1, 4};

    list <int> lista1, lista2, lista3;
    list <int>::iterator it;

    for (int i = 0; i < 10; i++) {
        lista1.push_front(valores[i]);
        lista2.push_back(valores[i]);
        lista3.push_back(valores[i]);
    }

    cout << "lista1" << endl;
    for (it = lista1.begin(); it != lista1.end(); it++) {
        cout << *it << endl;
    }

    cout << "\nlista2" << endl;
    for (it = lista2.begin(); it != lista2.end(); it++) {
        cout << *it << endl;;
    }

    cout << "\nlista3" << endl;
    lista3.sort();
    for (it = lista3.begin(); it != lista3.end(); it++) {
        cout << *it << endl;;
    }




    return 0;
}
