/*
Escreva um programa que leia um vetor de números inteiros e exiba o maior elemento presente no vetor
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int maior = numbers[0];
    for (int i = 0; i < n; i++) {
        if (numbers[i] > maior) {
            maior = numbers[i];
        }
    }
    printf("%d\n", maior);
}
