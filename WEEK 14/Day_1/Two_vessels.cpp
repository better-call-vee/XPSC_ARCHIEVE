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
        int a, b, c, big, small;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        if (a > b)
        {
            big = a;
            small = b;
        }
        else
        {
            big = b;
            small = a;
        }

        int cnt = 0;
        while (big > small)
        {
            big -= c;
            small += c;
            cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}