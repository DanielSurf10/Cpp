#include <iostream>

using namespace std;

int main() {

    int a[] = {300, 1500, 600, 1000, 150};
    int soma = 0;
    int b;


    for (int i = 0; i < 5; i++) {
        cin >> b;
        soma += b * a[i];
    }

    soma += 225;

    cout << soma << endl;


    return 0;
}
