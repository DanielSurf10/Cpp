#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159

using namespace std;

int main() {
    double raio, volume;

    cin >> raio;

    volume = 4 * PI * pow(raio, 3) / 3;

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;


    return 0;
}
