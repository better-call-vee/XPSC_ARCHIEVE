// https://codeforces.com/contest/1675/problem/A

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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a >= x && b >= y)
            cout << "YES\n";
        else
        {
            int remDOG = x - a;
            int remCAT = y - b;

            if (remDOG < 0)
                remDOG = 0;
            if (remCAT < 0)
                remCAT = 0;

            if (c - (remDOG + remCAT) >= 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}