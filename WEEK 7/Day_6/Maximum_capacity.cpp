// https://www.codechef.com/problems/MAXCAP

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

    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        if (X <= 8 && X * Y <= 500)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}