// https://www.codechef.com/problems/SUMPERM

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

        if (n % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        cout << 1 << " " << 2 << " ";
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i + 1 << " ";
            else
                cout << i - 1 << " ";
        }

        cout<<"\n";
    }
    return 0;
}