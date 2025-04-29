#include <iostream>
#include <cstdio>

using namespace std;

int main() {

     double a, b, c;
     cin >> a >> b >> c;

     if(a + b > c && a + c> b && b + c > a) {
          printf("Perimetro = %.1f\n", a + b + c);
     } else {
           printf("Area = %.1f\n", ((a + b) * c) / 2);
      }
}