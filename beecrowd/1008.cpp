#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int numF, qtdH;
    float valorPorHora;
    cin >> numF >> qtdH >> valorPorHora;
    float salario = valorPorHora * qtdH;
    printf("NUMBER = %d\n", numF);
    printf("SALARY = U$ %.2f\n", salario);
}
