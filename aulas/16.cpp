#include <complex>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    float V[n];
    float soma = 0;
    for (int i = 0; i < n; i++) {
        cin >> V[i];
        soma = soma + V[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%.1f ", V[i]);
    }
    float media = soma / n;
    printf("\n%.2f\n", soma);
    printf("%.2f\n", media);
}
