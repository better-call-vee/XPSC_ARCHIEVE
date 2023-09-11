/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 11th September, 2023 16:21:54 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n;

        if (n % 2 == 0)
            a = b = n / 2;
        else
        {
            a = 1;
            b = n - 1;
            ll cmp1 = lcm(a, b);
            ll cmp2 = 1e18;
            a = n / 2 - 1;
            b = n - a;
            if (a > 0)
                cmp2 = lcm(a, b);

            if (cmp1 < cmp2)
            {
                a = 1;
                b = n - 1;
            }
        }
        cout << a << " " << b << "\n";
    }

    return 0;
}