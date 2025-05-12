#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    string nomes[n];
    int idades[n];
    double alturas[n];
    for (int i = 0; i < n; i++) {
        cin >> nomes[i] >> idades[i] >> alturas[i];
    }
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + alturas[i];
    }
    double media = soma / n;
    int qtd = 0;
    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            qtd++;
        }
    }
    double x = (qtd * 100.0) / n;
    printf("Altura média: %.2f\n", media);
    printf("Pessoas com menos de 16 anos: %.2f%%", x);
}
