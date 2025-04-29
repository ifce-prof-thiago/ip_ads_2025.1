#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 2 == 0 && x > 0) {
            printf("EVEN POSITIVE\n");
        }
        else if (x % 2 == 0 && x < 0) {
            printf("EVEN NEGATIVE\n");
        }
        else if (x % 2 != 0 && x > 0) {
            printf("ODD POSITIVE\n");
        }
        else if (x % 2 != 0 && x < 0) {
            printf("ODD NEGATIVE\n");
        }
        else {
            printf("NULL\n");
        }
    }
}