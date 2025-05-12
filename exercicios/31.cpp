/*
Escreva um programa que leia as notas de duas provas e informe se o aluno foi aprovado ou reprovado.

Obs:.
Para ser aprovado o aluno deve obter uma média aritmética maior ou igual a 6!
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double n1, n2;
    cin >> n1 >> n2;
    double media = (n1 + n2) / 2;
    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}
