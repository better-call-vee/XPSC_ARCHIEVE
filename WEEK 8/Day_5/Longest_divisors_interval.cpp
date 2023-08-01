// https://codeforces.com/contest/1855/problem/B
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

        ll root = sqrt(n);
        if (n % 2 != 0)
        {
            cout << 1 << "\n";
            continue;
        }
        else if (n == 2)
        {
            cout << 2 << "\n";
            continue;
        }

        ll predi = 1, cnt = 1;
        for (ll i = 2; i <= root + 1; i++)
        {
            if (n % i == 0 && i - predi == 1)
                cnt++;

            else
                break;

            if (n % i == 0)
                predi = i;
        }

        cout << cnt << "\n";
    }

    return 0;
}