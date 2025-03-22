/*
Escreva um programa que calcule o IMC de um indivíduo, utilizando a seguinte fórmula
IMC = massa / altura²
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float massa;
    float altura;
    cin >> massa;
    cin >> altura;
    cout << "IMC: " << massa / pow(altura, 2) << endl;
}
