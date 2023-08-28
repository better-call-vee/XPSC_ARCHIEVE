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
        ll n;
        cin >> n;

        ll type, right = 2648956421, left = 1, lower_range, upper_range, totn;

        while (true)
        {
            type = (right + left) / 2;
            totn = type - 2;
            lower_range = ((totn) * (totn + 1)) / 2;

            upper_range = lower_range + type - 1;
            if (n > lower_range && upper_range >= n)
            {
                if (upper_range != n)
                    type += (n - (lower_range + 1));
                break;
            }
            else
            {
                if (upper_range < n)
                    left = type;
                else
                    right = type;
            }
        }
        cout << type << "\n";
    }

    return 0;
}