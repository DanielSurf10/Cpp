#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, a;

    cin >> n;

    a = n * (n - 1);

    for (int i = n - 1; i > 1; i--) {
         a *= (n - i);
    }

    if (a == 0)
        a = 1;

    cout << a << endl;


    return 0;
}
