// https://codeforces.com/problemset/problem/1822/D

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

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        if (n % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans(n);
        ans[0] = n;
        ans[1] = n - 1;
        int inp = 2, inp2 = ans[1] - 2;
        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = inp;
                inp += 2;
            }
            else
            {
                ans[i] = inp2;
                inp2 -= 2;
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}