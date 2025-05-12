/*
Escreva um programa que leia três números inteiros e informe se a soma deles é divisível por 5.
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int soma = n1 + n2 + n3;
    if (soma % 5 == 0) {
        printf("É divisível por 5");
    } else {
        printf("Não é divisível por 5");
    }
}
