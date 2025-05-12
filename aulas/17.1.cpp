#include <iostream>
#include <cstdio>
using namespace std;
struct Pessoa {
    string nome;
    int idade;
    double altura;
};
int main() {
    int n;
    cin >> n;
    Pessoa p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].nome >> p[i].idade >> p[i].altura;
    }
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + p[i].altura;
    }
    double media = soma / n;
    int qtd = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].idade < 16) {
            qtd++;
        }
    }
    double x = (qtd * 100.0) / n;
    printf("Altura média: %.2f\n", media);
    printf("Pessoas com menos de 16 anos: %.2f%%", x);
}
