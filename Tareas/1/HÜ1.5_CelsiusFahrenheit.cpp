#include <iostream>
using namespace std;

/* This programs converts from Celsius to Fahrenheit */

int main (){
    double celsius, fahrenheit;
    cout << "Geben Sie ein Wert in Celsius ein: ";
    cin >> celsius;
    fahrenheit = ((celsius/0.56)+32);
    cout << fahrenheit << endl;

    return 0;
}