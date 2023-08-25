#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int smallest, middle, largest;

    if (a < b && a < c) {
        smallest = a;
        middle = b < c ? b : c;
        largest = b < c ? c : b;
    } else if (b < a && b < c) {
        smallest = b;
        middle = a < c ? a : c;
        largest = a < c ? c : a;
    } else {
        smallest = c;
        middle = a < b ? a : b;
        largest = a < b ? b : a;
    }

    printf("%d %d %d", smallest, middle, largest);

    return 0;
}
