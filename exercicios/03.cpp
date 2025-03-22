/*
Crie um programa que calcule e exiba a média aritimética de três notas informadas pelo usuário.
*/
#include <iostream>

using namespace std;

int main() {
    float n1;
    float n2;
    float n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "Média aritmética: " << (n1 + n2 + n3) / 3 << endl;
}
