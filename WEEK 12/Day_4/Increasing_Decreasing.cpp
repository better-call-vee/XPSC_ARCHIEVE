/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
https://codeforces.com/contest/1864/problem/A
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
        int x, y, n;
        cin >> x >> y >> n;

        int parthokko = y - x;
        int jogfol = ((n - 1) * n) / 2;

        if (parthokko < jogfol)
            cout << -1 << "\n";
        else
        {
            vector<int> ans;
            ans.push_back(y);
            for (int i = 1; i <= n - 2; i++)
            {
                int val = y - i;
                y = y - i;
                ans.push_back(val);
            }
            ans.push_back(x);

            reverse(ans.begin(), ans.end());
            for (auto pr : ans)
                cout << pr << " ";
            cout << "\n";
            ans.clear();
        }
    }

    return 0;
}