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
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        if (ak >= m / k)
            cout << max(0LL, m % k - a1) << '\n';
            
        else
        {
            m -= ak * k;
            if (a1 >= m)
                cout << 0 << '\n';
            else if (a1 >= m % k)
                cout << (m - a1 + k - 1) / k << '\n';
            else
                cout << (m - a1) / k + (m - a1) % k << '\n';
        }
    }

    return 0;
}
