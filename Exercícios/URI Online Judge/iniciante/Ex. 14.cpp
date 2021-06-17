#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float km, litros;

    cin >> km >> litros;

    cout << fixed << setprecision(3);
    cout << km / litros << " km/l" << endl;


    return 0;
}
