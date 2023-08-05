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
            cout << n - 1 << "\n";
            int l = 2, r = 6;
            for (int i = 1; i <= n - 1; i++)
            {
                cout << l << " " << r << "\n";
                l += 3;
                r += 3;
            }
        }
    }

    return 0;
}