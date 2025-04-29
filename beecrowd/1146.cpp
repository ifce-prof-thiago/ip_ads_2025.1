#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    do {
        cin >> x;
        for (int i = 1; i <= x; i++) {
            printf("%d", i);
            if (i != x) {
                printf(" ");
            }
        }
        printf("\n");
    } while (x != 0);
}
