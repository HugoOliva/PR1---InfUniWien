#include <iostream>
#include <cmath>
using namespace std;

/* This programs takes the radious r and the angle a
and computes the area of the segment */

int main () {
    double angleA,radiousR, flaecheKreis;

    cout << "Winkel α: ";
    cin >> angleA;
    cout << "Radious r: ";
    cin >> radiousR;

    flaecheKreis = (radiousR * radiousR * (angleA-sin(angleA)))/2;
    cout << "Die Fläche der Kreissegment ist " << flaecheKreis <<endl;
    return 0;
}