#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int V[n];
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    for (int i = 0; i < n; i++) {
        if (V[i] < 0) {
            printf("%d\n", V[i]);
        }
    }
}
