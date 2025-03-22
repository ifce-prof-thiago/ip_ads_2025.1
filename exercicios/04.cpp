/*
Escreva um programa que calcule a média geométrica entre três números intormados pelo usuário.
M=∛n1*n2*n3
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float n1;
    float n2;
    float n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "Média Geométrica: " << pow(n1 * n2 * n3, 1 / 3.0) << endl;
}
