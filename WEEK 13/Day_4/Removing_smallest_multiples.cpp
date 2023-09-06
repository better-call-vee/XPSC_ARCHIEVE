#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1734/C
typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
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

        string T;
        cin >> T;
        vector<int> inp(n + 1);
        for (int i = 0; i < n; i++)
            inp[i + 1] = T[i] - '0';

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (inp[j] == 0)
                {
                    inp[j] = 2;
                    ans += i;
                }
                else if (inp[j] == 1)
                    break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}