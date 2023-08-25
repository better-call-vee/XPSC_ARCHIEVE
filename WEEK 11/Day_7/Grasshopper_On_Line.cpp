/*
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
        int x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            cout << 1 << "\n";
            cout << x << "\n";
            continue;
        }

        if (k % 2 == 0)
        {
            cout << 2 << "\n";
            cout << 1 << " " << (x - 1) << "\n";
        }

        else
        {
            cout << 2 << "\n";
            cout << 2 << " " << (x - 2) << "\n";
        }
    }

    return 0;
}