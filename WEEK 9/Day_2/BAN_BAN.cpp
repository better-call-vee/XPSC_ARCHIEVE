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

        if (n == 1)
        {
            cout << 1 << "\n1 2\n";
            continue;
        }

        else
        {
            if (n % 2 == 0)
                cout << n / 2 << "\n";
            else
                cout << n / 2 + 1 << "\n";
            ll l = 2, r = n*3;
            while (l <= r)
            {
                if (l == r)
                    cout << l << " " << l + 1 << "\n";
                else
                    cout << l << " " << r << "\n";
                l += 3;
                r -= 3;
            }
        }
    }

    return 0;
}