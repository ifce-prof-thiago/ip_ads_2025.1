#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string login = "admin";
    string pass = "12388";
    bool naoPodeAcesar = login != "admin" || pass != "12388";
    printf("%d\n", naoPodeAcesar);
}
