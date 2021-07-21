#include <iostream>

using namespace std;

int main() {
    int horas = 0, mim = 0, seg, iSeg;

    cin >> iSeg;

    if (iSeg > 60) {
        
        if (iSeg > 3600) {
            horas = iSeg / 3600;
            mim   = iSeg % 3600 / 60;
            seg   = iSeg % 60;
        } else {
            mim = iSeg / 60;
            seg = iSeg % 60;
        }

    } else {
        seg = iSeg;
    }

    cout << horas << ":" << mim << ":" << seg << endl;


    return 0;
}
