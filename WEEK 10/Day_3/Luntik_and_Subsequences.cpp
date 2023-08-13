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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int t, inp;
    cin >> t;
    while (t--)
    {
        int n, zero = 0, one = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            if (inp == 0)
                zero++;
            else if (inp == 1)
                one++;
        }
        ll ans = (1ll << zero) * ll(one); //2 to the power zero count = (1ll << zero);
        cout << ans << nln;
    }

    return 0;
}