#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double money;
    cin >> money;
    int left = money * 100;
    int oneHundred = money / 100;
    left = left % 10000;
    printf("NOTAS:\n" );
    printf("%d nota(s) de R$ 100.00\n", oneHundred);

    int fifty = left / 5000;
    printf("%d nota(s) de R$ 50.00\n", fifty);
    left = left % 5000;

    int twenty = left / 2000;
    printf("%d nota(s) de R$ 20.00\n", twenty);
    left = left % 2000;

    int ten = left / 1000;
    printf("%d nota(s) de R$ 10.00\n", ten);
    left = left % 1000;

    int five = left / 500;
    printf("%d nota(s) de R$ 5.00\n", five);
    left = left % 500;

    int two = left / 200;
    printf("%d nota(s) de R$ 2.00\n", two);
    left = left % 200;

    printf("MOEDAS:\n");
    int one = left / 100;
    printf("%d moeda(s) de R$ 1.00\n", one);
    left = left % 100;

    int fiftyCents = left / 50;
    printf("%d moeda(s) de R$ 0.50\n", fiftyCents);
    left = left % 50;

    int twtFiveCents = left / 25;
    printf("%d moeda(s) de R$ 0.25\n", twtFiveCents);
    left = left % 25;

    int tenCents = left / 10;
    printf("%d moeda(s) de R$ 0.10\n", tenCents);
    left = left % 10;

    int fiveCents = left / 5;
    printf("%d moeda(s) de R$ 0.05\n", fiveCents);
    left = left % 5;

    printf("%d moeda(s) de R$ 0.01\n", left);

}
