#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    while (x != y) {
        if (x < y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
        cin >> x >> y;
    }
}
