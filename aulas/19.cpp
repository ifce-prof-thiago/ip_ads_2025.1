#include  <iostream>
#include <cstdio>
using namespace std;

int main() {
    int m;
    int n;
    cin >> m >> n;
    float M[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }
}
