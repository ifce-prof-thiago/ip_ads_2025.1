#include <cstdio>

struct Point {
    int x;
    int y;
};

void soma2(Point &p) {
    p.x = p.x + 2;
    p.y = p.y + 2;
}

int main() {
    Point p1 = {-2, 0};
    soma2(p1);
    printf("Ponto: (%d, %d)\n", p1.x, p1.y);
}
