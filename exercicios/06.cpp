/*
Crie um programa que calcule e exiba o perímetro de uma circunferência, solicitando o raio ao usuário.
C=2*PI*r
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float raio;
  cin >> raio;
  cout << "Perímetro: " << 2 * M_PI * raio << endl;
}