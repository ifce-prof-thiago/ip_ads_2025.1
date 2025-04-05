#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n = 10;
    float notas[n];
    for (int i = 0; i < n; i++) {
        cin >> notas[i];
    }
    for (int i = 0; i < n; i++) {
        printf("Valor: %.1f\n", notas[i]);
    }
}
