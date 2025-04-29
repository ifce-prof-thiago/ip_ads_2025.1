#include <cstdio>
using namespace std;

int main() {
    int x = 2;
    int y = 10;
    printf("Antes do while:\n");
    while (x < y) {
        printf("%d - %d\n", x, y);
        x = x * 2;
        y = y + 1;
    }
    printf("Depois do while:\n");
}
