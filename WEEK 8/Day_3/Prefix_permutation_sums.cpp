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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = (n * (n + 1)) / 2;

        vector<ll> ps(n - 1);
        vector<bool> chk(n + 1, false);

        for (int i = 0; i < n - 1; i++)
            cin >> ps[i];

        if (ps[n - 2] > sum)
        {
            cout << "NO\n";
            continue;
        }

        if (sum - ps[n - 2] > n)
        {
            cout << "NO\n";
            continue;
        }

        chk[ps[0]] = true;

        for (int i = 1; i < n - 1; i++)
        {
            ll dif = ps[i] - ps[i - 1];
            if (dif <= n)
                chk[dif] = true;
        }

        ll count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (chk[i])
                count++;
        }

        if ((n - count) > 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}