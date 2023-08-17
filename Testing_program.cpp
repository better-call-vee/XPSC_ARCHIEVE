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

        ll fancy_coins = 0;
        

        ll coins_k = min(ak, m / k); 
        m -= (coins_k * k);

        ll coins_1 = min(a1, m);
        m -= coins_1;

        if (m == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        fancy_coins += m / k;
        m %= k;

        if (m == 0)
            cout << fancy_coins << "\n";
        else if (m <= a1 && m != 0)
            cout << fancy_coins + 1 << "\n";
        else
            cout << fancy_coins + m << "\n";
    }

    return 0;
}
