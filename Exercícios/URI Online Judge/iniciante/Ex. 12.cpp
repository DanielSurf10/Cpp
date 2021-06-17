#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159
#define pow2(x) pow(x, 2)

using namespace std;

// a) a área do triângulo retângulo que tem A por base e C por altura.      A * C / 2
// b) a área do círculo de raio C. (pi = 3.14159)                           PI * C²
// c) a área do trapézio que tem A e B por bases e C por altura.            (A + B) * C / 2
// d) a área do quadrado que tem lado B.                                    B²
// e) a área do retângulo que tem lados A e B.                              A * B

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: "   << a * c / 2 << endl;
    cout << "CIRCULO: "     << PI * pow2(c) << endl;
    cout << "TRAPEZIO: "    << (a + b) * c / 2 << endl;
    cout << "QUADRADO: "    << pow2(b) << endl;
    cout << "RETANGULO: "   << a * b << endl;


    return 0;
}
