// https://www.codechef.com/problems/XOR_ORDER

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
        int A, B, C;
        cin >> A >> B >> C;

        if (A < B && A < C && B < C)
        {
            if (C % 2 == 0 && A % 2 != 0)
                cout << 1 << "\n";

            else if (A % 2 == 0)
                cout << 1 << "\n";

            else if (C % 2 != 0 && A % 2 != 0)
                cout << C + 1 << "\n";
        }

        else if (A > B && A > C && B > C)
            cout << A << "\n";

        else
            cout << -1 << "\n";
    }

    return 0;
}