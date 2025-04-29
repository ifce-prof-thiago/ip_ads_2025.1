#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;

    int in = 0;
    int out = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        // if (x >= 10 && x <= 20) {
        //     in++;
        // } else {
        //     out++;
        // }
        x >= 10 && x <= 20 ? in++ : out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
}
