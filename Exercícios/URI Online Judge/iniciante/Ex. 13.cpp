#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << " eh o maior" << endl;

    
    return 0;
}
