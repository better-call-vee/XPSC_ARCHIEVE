/*
https://codeforces.com/contest/1604/problem/A
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

    int t;
    cin >> t;

    while (t--)
    {
        int n, inp;
        cin >> n;

        int ops = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> inp;
            int cmp = inp - i;
            if (cmp > 0)
                ops = max(ops, cmp);
        }
        cout << ops << nln;
    }

    return 0;
}