#include <iostream>
#include <cstdio>
using namespace std;
int main() {
     float largura;
     float altura;
     float precoMetroQuadrado;
      cin >> largura >> altura >> precoMetroQuadrado;
      float area = largura * altura;
      float precoTotal = area * precoMetroQuadrado;
      printf("AREA: %.2f\n", area);
      printf("Preço: R$ %.2f\n", precoTotal);
}