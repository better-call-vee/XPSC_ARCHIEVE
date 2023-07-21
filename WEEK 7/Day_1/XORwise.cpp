// https://codeforces.com/problemset/problem/1421/A
/*
I have to find the number(x) which can give the smallest a^x + b^x value.
we can take the maximum of a and b and XOR with both a and b.
So eventually b^b will be 0. and the ANSWER is a^b.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << (a ^ b) << "\n";
    }

    return 0;
}