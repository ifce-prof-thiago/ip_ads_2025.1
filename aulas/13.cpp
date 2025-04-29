#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int idade;
    cin >> idade;
    double soma = 0;
    int cont = 0;
    while (idade >= 0) {
        cont++;
        soma += idade;
        cin >> idade;
    }
    if (cont == 0) {
        printf("impossível calcular\n");
    } else {
        double media = soma / cont;
        printf("%.1f\n", media);
    }
}
