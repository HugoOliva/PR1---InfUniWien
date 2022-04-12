#include <iostream>
using namespace std;

/* This programs takes a number n and adds all the numbers until n. (Gauss) */

int main (){
    double summe = 0, n;

    cout << "Nummer eingebn: ";
    cin >> n;

    while (n > 0){
        summe = summe + n;
        n--;
    }

    cout << summe << endl;
    
    return 0;
}