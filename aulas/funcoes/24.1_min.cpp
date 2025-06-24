#include <iostream>

int min(int V[], int n) {
    int x = V[0];
    for (int i = 1; i < n; i++) {
        if (V[i] < x) {
            x = V[i];
        }
    }
    return x;
}

int main() {
    int V[] = {1, 5, 7, 2};
    int X[] = {-1, 50, 47, 23, 6};
    int x = min(V, 4);
    int z = min(X, 5);
}
