#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);

    int nINT = (int)n;
    int Mds = (int)((n - nINT + 0.005) * 100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nINT / 100);
    nINT %= 100;

    printf("%d nota(s) de R$ 50.00\n", nINT / 50);
    nINT %= 50;

    printf("%d nota(s) de R$ 20.00\n", nINT / 20);
    nINT %= 20;

    printf("%d nota(s) de R$ 10.00\n", nINT / 10);
    nINT %= 10;

    printf("%d nota(s) de R$ 5.00\n", nINT / 5);
    nINT %= 5;

    printf("%d nota(s) de R$ 2.00\n", nINT / 2);
    nINT %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", nINT);

    printf("%d moeda(s) de R$ 0.50\n", Mds / 50);
    Mds %= 50;

    printf("%d moeda(s) de R$ 0.25\n", Mds / 25);
    Mds %= 25;

    printf("%d moeda(s) de R$ 0.10\n", Mds / 10);
    Mds %= 10;

    printf("%d moeda(s) de R$ 0.05\n", Mds / 5);
    Mds %= 5;

    printf("%d moeda(s) de R$ 0.01\n", Mds);

    return 0;
}
