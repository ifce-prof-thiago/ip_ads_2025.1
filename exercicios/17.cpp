/*
Faça um programa que receba uma palavra e exiba cada letra separadamente.
Atenção: Necessita de um laço de repetição.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    for (int i = 0; i < palavra.size(); i = i + 1) {
        printf("%c\n", palavra[i]);
    }
}
