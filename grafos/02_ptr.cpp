#include <cstdio>

void soma2(int &x) {
    x = x + 2;
}

int main() {
    int x = 10;
    soma2(x);
    printf("X: %d\n", x);
}
