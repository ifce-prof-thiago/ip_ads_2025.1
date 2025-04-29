#include <cstdio>
using namespace std;

int main() {
    int x = 5;
    int y = 0;
    while (x > 2) {
        printf("%d\n", x);
        y = x + y;
        x = x - 1;
    }
}
