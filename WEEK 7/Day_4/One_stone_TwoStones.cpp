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

    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int pair = min(X, Y);

        if ((X - pair) < 2 && (Y - pair) < 2)
        {
            if (pair % 2 == 0)
                cout << "CHEFINA\n";
            else
                cout << "CHEF\n";
        }

        else
        {
            if ((X - pair) >= 2 && (Y - pair) == 0)
                cout << "CHEF\n";
            else if ((Y - pair) >= 2 && (X - pair) == 0)
                cout << "CHEFINA\n";
        }
    }

    return 0;
}