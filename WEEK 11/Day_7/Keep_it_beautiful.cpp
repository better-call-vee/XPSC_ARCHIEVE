/*
https://codeforces.com/contest/1841/problem/B
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
        vector<int> ans(n);
        int prv, first;
        bool rpt = false;

        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            if (i == 0)
            {
                ans[i] = 1;
                prv = inp;
                first = inp;
                continue;
            }
            if (!rpt)
            {
                if (inp >= prv)
                {
                    ans[i] = 1;
                    prv = inp;
                }
                else
                {
                    if (inp <= first)
                    {
                        ans[i] = 1;
                        rpt = true;
                        prv = inp;
                        continue;
                    }
                }
            }
            else
            {
                if (inp >= prv && inp <= first)
                {
                    prv = inp;
                    ans[i] = 1;
                }
                else
                    ans[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i];
        cout << "\n";
    }

    return 0;
}