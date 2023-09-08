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
        int n, x, y;
        ll score = 0;
        cin >> n >> x >> y;

        if (x == y)
        {
            cout << 0 << "\n";
            continue;
        }

        ll lcm_val = lcm(1LL * x, 1LL * y);
        ll common_multiples = n / lcm_val;

        int x_div = n / x, y_div = n / y;
        x_div -= common_multiples;
        y_div -= common_multiples;

        score += 1LL * (n - x_div + 1 + n) * x_div / 2;
        score -= 1LL * y_div * (y_div + 1) / 2;

        cout << score << "\n";
    }

    return 0;
}