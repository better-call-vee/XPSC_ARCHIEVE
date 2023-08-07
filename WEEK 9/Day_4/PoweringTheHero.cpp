// https://codeforces.com/problemset/problem/1800/C2

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

        priority_queue<ll> bonus;

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;

            if (inp != 0)
                bonus.push(inp);

            else if (inp == 0 && !bonus.empty())
            {
                total += bonus.top();
                bonus.pop();
            }
        }

        cout << total << "\n";
    }
    return 0;
}
