#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, soma = 0;
    int t, v;

    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> t;
        cin >> v;

        soma += t * v;
    }

    cout << soma << endl;

 
    return 0;
}
