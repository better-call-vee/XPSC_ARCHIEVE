/*
https://codeforces.com/problemset/problem/1814/A
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
        ll n, k;
        cin >> n >> k;

        if (n == 1)
        {
            if (k != 1)
                cout << "NO\n";
            else if (k == 1)
                cout << "YES\n";
            continue;
        }

        if (n % 2 == 0)
            cout << "YES\n";
        else
        {
            if (k == n)
                cout << "YES\n";
            else if (k <= n - 2 && k % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}