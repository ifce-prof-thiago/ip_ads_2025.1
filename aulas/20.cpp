#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int M[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", M[i][i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] < 0) {
                count++;
            }
        }
    }
    printf("QUANTIDADE DE NEGATIVOS: %d\n", count);
}
