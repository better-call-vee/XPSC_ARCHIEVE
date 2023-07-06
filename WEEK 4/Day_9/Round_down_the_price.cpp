// https://codeforces.com/contest/1702/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    vector<ll> rounds(10);

    for (int i = 0; i < 10; i++)
        rounds[i] = ll(round(pow(10, i)));

    int t;
    cin >> t;

    while (t--)
    {
        ll m;
        cin >> m;

        int ans = 0;

        for (int i = 0; i < 10; i++)
        {
            if (rounds[i] > m)
            {
                ans = m - rounds[i - 1];
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}