/*
Elabore um programa que primeiro receba um valor N e, em seguida, leia N números.
Ao final, apresente a soma de todos esses valores.
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + numeros[i];
    }
    printf("%d\n", soma);
}
