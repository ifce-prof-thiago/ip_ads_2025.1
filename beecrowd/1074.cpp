#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            if (x % 2 == 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("ODD POSITIVE\n");
            }
        } else if (x < 0) {
            if (x % 2 == 0) {
                printf("EVEN NEGATIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        } else {
            printf("NULL\n");
        }
    }
}
