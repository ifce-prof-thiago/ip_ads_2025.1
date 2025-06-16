#include <iostream>
#include <cstdio>

using namespace std;

void insertionSort(int A[], const int n) {
    for (int i = 1; i < n; i++) {
        const int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

void printVector(int A[], const int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}

int sumVector(const int A[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    return sum;
}

void multiplyForX(int A[], const int n, const int x) {
    for (int i = 0; i < n; i++) {
        A[i] = A[i] * x;
    }
}

int main() {
    const int n = 6;
    int A[] = {3, 3, 3, 3, 3, 3};
    multiplyForX(A, n, 2);
    const int x = sumVector(A, n);
    cout << x << endl;
}
