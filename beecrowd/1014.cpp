#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int distancia;
  float consumo;
  cin >> distancia >> consumo;
  float consumoPorKm = distancia / consumo;
  printf("%.3f km/l\n", consumoPorKm);
}