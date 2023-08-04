// https://codeforces.com/contest/1791/problem/E

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
        int n;
        cin >> n;

        vector<ll> inp(n);
        ll negCnt = 0, mini = INT_MAX, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
            if (inp[i] < 0)
                negCnt++;
            ans += abs(inp[i]);
            mini = min(mini, abs(inp[i]));
        }

        if (negCnt % 2 == 0)
            cout << ans << "\n";

        else
            cout << ans - (2 * mini) << "\n";
    }

    return 0;
}