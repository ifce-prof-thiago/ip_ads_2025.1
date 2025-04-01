#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    string nome = "Alice";
    int idade = 20;
    double renda = 8000.00;
    printf("%s tem %06d anos e possui uma renda de R$ %.2f.\n", nome.c_str(), idade, renda);
}
