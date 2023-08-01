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

        int swp = 0;
        for (int i = 1; i <= n; i++)
        {
            int inp;
            cin >> inp;

            if (inp == i)
                swp++;
        }

        if (swp % 2 != 0)
            cout << swp / 2 + 1 << "\n";

        else
            cout << swp / 2 << "\n";
    }

    return 0;
}