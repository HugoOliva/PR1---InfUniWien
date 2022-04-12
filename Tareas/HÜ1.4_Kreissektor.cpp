#include <iostream>
#include <cmath>
using namespace std;

/* This programs takes the radious r and the angle a
and computes the area of the Sector (Kreissektor) */

int main () {
    double radiousR, angleA, sectorArea, PI = 3.14159; //     Defined Variables
    
    cout << "Radious R: ";
    cin >> radiousR;
    cout << "Winkel a: ";
    cin >> angleA;
    sectorArea = ((radiousR*radiousR*PI*angleA))/360;

    cout << "Die Fläche des Kreissektors ist: " << sectorArea << endl;

    return 0;
}