#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    float V[n];
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%.1f\n", V[i]);
    }
}
