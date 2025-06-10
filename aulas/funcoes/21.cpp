#include  <iostream>
#include <cstdio>

using namespace std;

float mediaIfce(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main() {
    for (int i = 0;  i < 3; i++) {
        float n1, n2;
        cin >> n1 >> n2;
        printf("%.2f\n", mediaIfce(n1, n2));
    }
}
