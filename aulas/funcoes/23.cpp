#include <cstdio>
#include <cstdlib>
#include <filesystem>

using namespace std;

bool exists(int V[], int n, int element) {

    return false;
}

int max(int V[], int n) {

    return 0;
}

int min(int V[], int n) {
    return 0;
}

int sum(int V[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s = s + V[i];
    }
    return s;
}

void swap(int V[], int i, int j) {
    const int temp = V[i];
    V[i] = V[j];
    V[j] = temp;
}

void random(int V[], int n) {
    srand(time(0));
    for (int i = 0; i < 2; i++) {
        const int x = rand() % n;
        const int y = rand() % n;
        swap(V, x, y);
    }
}

void printVector(const int V[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", V[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

int main() {
    int V[] = {5, 4, 6, 7, 8};
    printf("%d\n", sum(V, 5));
}
