/*
Escreva um programa que leia três números e verifique se a soma deles é
positiva, negativa ou igual a zero
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int soma = n1 + n2 + n3;
    if (soma == 0) {
        printf("Soma igual a ZERO");
    } else if (soma > 0) {
        printf("Soma positiva");
    } else {
        printf("Soma negativa");
    }
}
