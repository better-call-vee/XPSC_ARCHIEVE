#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, small, large, media;
    scanf("%d %d %d", &x, &y, &z);
    int sum = x + y + z;
    {
        if (x < y && x < z)
            small = x;
        else if (y < x && y < z)
            small = y;
        else if (z < x && z < y)
            small = z;
        if (x > y && x > z)
            large = x;
        else if (y > x && y > z)
            large = y;
        else if (z > x && z > y)
            large = z;
    }
    printf("%d %d %d\n", small, (sum - (small + large)), large);
    return 0;
}