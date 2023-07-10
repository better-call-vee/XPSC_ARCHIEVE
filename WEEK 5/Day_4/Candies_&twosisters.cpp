// https://codeforces.com/contest/1335/problem/A

#include <bits/stdc++.h>
using namespace std;

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
        ll n;
        cin >> n;

        if (n % 2 == 0)
            cout << n / 2 - 1 << "\n";
        else
            cout << n / 2 << "\n";
    }

    return 0;
}