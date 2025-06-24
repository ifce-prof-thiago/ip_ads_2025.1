#include <iostream>
int min(int M[][3], int m, int n) {
    int x = M[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] < x) {
                x = M[i][j];
            }
        }
    }
    return x;
}

int main() {
    int X[][3] = {
        {-3, 4, 5},
        {9, 8, 2},
        {0, 5, 10},
        {-70, 4, 1}
    };
    int x = min(X, 4, 3);
}
