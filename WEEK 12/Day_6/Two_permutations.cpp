/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
   https://codeforces.com/contest/1761/problem/A
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
        int n, a, b;
        cin >> n >> a >> b;

        if (n == a && a == b)
            cout << "YES\n";
        else
        {
            if ((n - (a + b)) >= 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}