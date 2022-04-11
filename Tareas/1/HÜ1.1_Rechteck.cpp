#include <iostream>
 
using namespace std;
 
/* This Program reads the lengt and width of a rectangle
and output the circumference as well as the area. */

int main() {
   
 int a,b;
   cout << "Länge: ";
   cin >> a;
   cout << "Breite: ";
   cin >> b;
   cout << "La Länge es: " << a << "\n";
   cout << "La Breite es: " << b << "\n";
   cout << "Umfang = " << 2*(a+b) << "\n";
   cout << "Fläche = " << (a*b) << endl;

   return 0;
 
}