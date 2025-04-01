#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string nomePet = "Baleia";
    string tipoPet = "Cachorro";
    double pesoPet = 12.5;
    double alturaPet = 47.12345678;
    int idadePet = 8;
    int registro = 3021;
    char genero = 'F';
    printf("%s\n", string(60, '-').c_str());
    printf("Informações de cadastro\n");
    printf("%s\n", string(60, '-').c_str());
    printf("%s chamado(a) %s com %.2f kg e %.2f cm de altura.\n", tipoPet.c_str(), nomePet.c_str(), pesoPet, alturaPet);
    printf("Idade: %d | Registro: #%06d | Genero: %c\n", idadePet, registro, genero);
    printf("%s\n", string(60, '-').c_str());
    printf("O pet %s foi registrado com sucesso no sistema!\n", nomePet.c_str());
    printf("%s\n", string(60, '-').c_str());
}
