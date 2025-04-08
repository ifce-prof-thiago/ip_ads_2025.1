#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string login = "admin";
    string pass = "12388";
    bool podeAcessar = login == "admin" && pass == "1238";
    printf("%d\n", podeAcessar);
}
