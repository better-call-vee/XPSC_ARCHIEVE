#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

bool fullSq(double number)
{
    return floor(number) == number;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll X;
        cin >> X;

        if (X == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        double squareRoot = sqrt(X);
        ll a = 0;
        if (fullSq(squareRoot))
            a = int(squareRoot) - 1;

        else
            a = int(squareRoot);

        ll sq = pow(a, 2);
        ll b = X - sq;

        if (b > 1e6)
        {
            ll c = a + 1;
            sq = a * c;
            b = X - sq;

            cout << a << " " << c << " " << b << "\n";
            continue;
        }

        cout << a << " " << a << " " << b << "\n";
    }

    return 0;
}