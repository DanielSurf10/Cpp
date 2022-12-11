#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c;

    cin >> c;

    for (int i = 0; i < 5; i++) {
        cin >> a;

        b += (a == c) ? 1 : 0;
    }

    cout << b << endl;

 
    return 0;
}
