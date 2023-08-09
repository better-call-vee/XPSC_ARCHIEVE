/*
https://codeforces.com/problemset/problem/879/B
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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int n, k;
    cin >> n >> k;
    queue<int> tt;

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        tt.push(inp);
    }

    if (k >= n - 1)
    {
        cout << n << nln;
        return 0;
    }
    bool winner = false;
    ll count = 0, ans;
    while (true)
    {
        int cmp = tt.front();
        if (cmp == n)
        {
            ans = cmp;
            break;
        }
        tt.pop();
        while (true)
        {
            if (count == k)
            {
                winner = true;
                break;
            }
            if (cmp > tt.front())
            {
                count++;
                int go = tt.front();
                tt.pop();
                tt.push(go);
            }
            else
            {
                count = 1;
                tt.push(cmp);
                break;
            }
        }
        if (winner)
        {
            ans = cmp;
            break;
        }
    }
    cout << ans << nln;

    return 0;
}