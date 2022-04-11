#include <iostream>
 
using namespace std;
 
/* This Program ouputs the total preis of the Artikels*/

int main() {
    double a,b,c;

    cout << "Artikelpreis: ";
    cin >> a;
    cout << "Anzahl: ";
    cin >> b;
    cout << "Mehrwertsteuersatz (%): ";
    cin >> c;

    cout << "Der Gesamtpreis ist: " << a*b+(a*b*(c/100)) << endl;

    return 0;

}