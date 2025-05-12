/*
Escreva um programa que solicite o nome de um dia da semana e exiba se é um dia útil ou final de semana.

Obs:.
dias úteis: segunda-feira, terça-feira, quarta-feira, quinta-feira, sexta-feira
finais de semana: sábado ou domingo
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string dia;
    cin >> dia;
    if (dia == "sábado" || dia == "domingo") {
        printf("Final de semana");
    } else {
        printf("Dia últil");
    }
}
