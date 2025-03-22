/*
Escreva um programa que solicite ao usuário dois números e exiba a soma, subtração, multiplicação e a divisão
entre eles
*/

#include <iostream>

using namespace std;

int main() {
    float numero1;
    float numero2;
    cin >> numero1;
    cin >> numero2;
    cout << "Soma: " << numero1 + numero2 << endl;
    cout << "Subtração: " << numero1 - numero2 << endl;
    cout << "Multiplicação: " << numero1 * numero2 << endl;
    cout << "Divisão: " << numero1 / numero2 << endl;
}
