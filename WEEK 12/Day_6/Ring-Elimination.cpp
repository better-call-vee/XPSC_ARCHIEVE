/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
https://codeforces.com/contest/1761/problem/B
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

        set<int> track;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            track.insert(inp);
        }

        if (track.size() > 2)
            cout << n << "\n";
        else
            cout << n / 2 + 1 << "\n";
    }

    return 0;
}