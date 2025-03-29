/*
Escreva um programa que calcule a energia cinética de um  objeto em movimento, utilizando a fórmula
E = (mv²) / 2
onde 'E' é a energia cinética, 'm' é a massa do objeto e 'v' é a velocidade.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   float m, v;
   cin >> m >> v;
   float E = (m * v * v) / 2;
   printf("E = %.2f\n", E);
}