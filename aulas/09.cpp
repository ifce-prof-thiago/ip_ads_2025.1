#include <cstdio>

int main() {
  int a = 0b1;
  int b = 0b1;
  int aANDb = a & b;
  int aORb = a | b;
  int aXORb = a ^ b;
  int notA = !a;
  int notB = !b;
  printf("A & B = %d\n", aANDb);
  printf("A | B = %d\n", aORb);
  printf("A ^ B = %d\n", aXORb);
  printf("~A = %d\n", notA);
  printf("~B = %d\n", notB);
}