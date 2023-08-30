#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1438/problem/B
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        set<int> check(arr.begin(), arr.end());
        int cmp = check.size();
        if (cmp == n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

/*
When we consider powers of 2, each power of 2 corresponds to a binary number with only one '1' bit:

2^0 = 1 = 0001 in binary
2^1 = 2 = 0010 in binary
2^2 = 4 = 0100 in binary
2^3 = 8 = 1000 in binary
... and so on.

Note a few characteristics:

Unique Position of 1: Each power of 2 has the '1' bit in a unique position.
Addition: When you add two distinct powers of 2, the result will not produce any carry in binary 
arithmetic. This is because you're essentially adding a number with a '1' in one position to another 
number with a '1' in a different position, and all other positions contain '0's.

Using the example you provided:
2^4 = 16 = 10000 in binary
2^3 = 8 = 1000 in binary
Sum = 11000 in binary = 2^4 + 2^3

Now, when you compute the sum of any powers of 2, the resulting binary number will have '1's in 
exactly those positions corresponding to the powers of 2 you added. No two distinct powers of 2, 
when added, will ever give another power of 2.

Why?
Because for a number to be a power of 2, it must have only one '1' bit in its binary representation.
But when you add two distinct powers of 2, you get a number with two '1' bits in its binary
representation.

This property is intrinsic to the binary number system and is why powers of 2 have unique binary
representations. This characteristic is useful in a variety of computer science and mathematical
problems, including the one you're working on.
*/