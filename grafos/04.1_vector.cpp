#include <vector>
#include <cstdio>
using namespace std;
int main() {

  vector x = {1, 2, 3};
  x.push_back(4);
  x.push_back(5);

  for (const int i : x) {
    printf("%d\n", i);
  }

}