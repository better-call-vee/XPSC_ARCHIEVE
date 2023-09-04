#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calculateAnswer(const vector<int> &bin)
{
    ll one = 0, ans = 0;
    for (int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == 0)
            ans += one;
        if (bin[i] == 1)
            one++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> bin(n);

        for (int i = 0; i < n; i++)
            cin >> bin[i];

        ll ans = 0, ans2 = 0, ans3 = 0;
        ans = calculateAnswer(bin);

        for (int i = 0; i < n; i++)
        {
            if (bin[i] == 0)
            {
                bin[i] = 1;
                ans2 = calculateAnswer(bin);
                bin[i] = 0;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (bin[i] == 1)
            {
                bin[i] = 0;
                ans3 = calculateAnswer(bin);
                break;
            }
        }

        cout << max(ans, max(ans2, ans3)) << "\n";
    }

    return 0;
}
// codeforces.com/contest/1760/problem/E