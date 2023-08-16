/*
https://codeforces.com/contest/1614/problem/B
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/
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

        vector<pair<ll, int>> blds;
        for (int i = 0; i < n; i++)
        {
            ll inp;
            cin >> inp;
            blds.push_back({inp, i});
        }

        sort(blds.begin(), blds.end(), greater<pair<ll, int>>());

        vector<int> crds(n);
        bool minus = false;
        int val = 0;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            int idx = blds[i].second;
            if (!minus)
            {
                val = -val;
                val++;
                minus = true;
            }
            else
            {
                val = -val;
                minus = false;
            }
            crds[idx] = val;
            ll mul = abs(0 - val);
            total += (2 * mul * blds[i].first);
        }

        cout << total << "\n"
             << 0 << " ";
        for (int i = 0; i < n; i++)
            cout << crds[i] << " ";
        cout << "\n";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
#ifdef __LOCAL__
#include <debug_local.h>
#endif
using namespace std;
void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int i, int j)
         { return a[i] > a[j]; });
    vector<int> ans(n + 1);
    ans[0] = 0;
    long long dist = 0;
    for (int i = 0, l = 1, r = -1; i < n; i++)
    {
        if (i % 2)
        {
            dist += 2LL * l * a[ord[i]];
            ans[ord[i] + 1] = l++;
        }
        else
        {
            dist += 2LL * (-r) * a[ord[i]];
            ans[ord[i] + 1] = r--;
        }
    }
    cout << dist << "\n";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        testCase();
    }
    return 0;
}

*/