/*
Escreva um programa que leia três números e informe se eles podem ser os lados
de um triângulo, ou seja, a soma de dois lados deve ser sempre maior que o terceiro lado
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 + n2 > n3 && n2 + n3 > n1 && n1 + n3 > n2) {
        printf("Formam Triângulo");
    } else {
        printf("Não formam triângulo");
    }
}
