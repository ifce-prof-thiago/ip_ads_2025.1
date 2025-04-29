#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, contador, soma;

    cin >> x;
    soma = 0, contador = 0;
    if (x < 0) {
        printf("Impossivel calcular\n");
    }
    else {
        while (x > 0) {
            contador++;
            soma = soma + x;
            cin >> x;
        }
        double media = (double) soma / contador;
        printf("%.2f",media);
    }
}