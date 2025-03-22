/*
Escreva um programa que calcule a área de uma circunferência a partir do raio, utilizando a fórmula
A = PI * r²
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float raio;
    cin >> raio;
    cout << "A: " << M_PI * pow(raio, 2) << endl;
}