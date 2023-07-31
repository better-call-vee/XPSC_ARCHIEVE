#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> gcd1(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> gcd1[i];

        int result = gcd1[1];
        for (int i = 2; i <= n; i++)
        {
            result = gcd(result, gcd1[i]);
            if (result == 1)
                break;
        }

        if (result == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        else if (n == 1 && gcd1[1] > 1)
        {
            cout << 1 << "\n";
            continue;
        }

        else if (gcd(gcd1[n], n) == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        else
        {
            if (n > 2)
            {
                int cmpGCD1 = gcd(gcd1[n], n);
                if (gcd(cmpGCD1, gcd1[n - 1]) == 1)
                {
                    cout << 1 << "\n";
                    continue;
                }

                int pre = gcd1[n];
                gcd1[n] = cmpGCD1;
                int chk = gcd1[1];
                for (int i = 1; i <= n; i++)
                {
                    chk = gcd(chk, gcd1[i]);
                    if (chk == 1)
                        break;
                }
                if (chk == 1)
                {
                    cout << 1 << "\n";
                    continue;
                }

                gcd1[n] = pre;
                int cmpGCD2 = gcd(gcd1[n - 1], n - 1);
                gcd1[n - 1] = cmpGCD2;
                int chk2 = gcd1[1];
                for (int i = 1; i <= n; i++)
                {
                    chk2 = gcd(chk2, gcd1[i]);
                    if (chk2 == 1)
                        break;
                }
                if (chk2 == 1)
                {
                    cout << 2 << "\n";
                    continue;
                }
                else
                    cout << 3 << "\n";
            }

            if (n == 2)
            {
                if (gcd(gcd1[1], gcd1[2]) == 1)
                    cout << 0 << "\n";

                else if (gcd(gcd(gcd1[2], 2), gcd1[1]) == 1)
                    cout << 1 << "\n";

                else
                    cout << 2 << "\n";
            }
        }
    }

    return 0;
}