#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double a, b, media;

    cin >> a >> b;

    media = (a * 3.5 + b * 7.5 ) / (3.5 + 7.5);

    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;


    return 0;
}
