//https://codeforces.com/contest/1851/problem/D

/*
3 scenarios.
when the actual sum of 1 to n is less than given prefix sum's last value, then obv. it's a red flag.
when the actual sum is greater than the prefix sum's last value, then we take the actual sum as the
missing prefix sum. and then we check all the elements by subtracting the prefix sum values;
when the actual sum is equivalent to the prefix sum's last value. then the missing values shouldn't 
be more than 2 in count. and we then check if the sum of the missing values is equivalent to any of 
the gap values among the prefix sum values given in the input.
also the first value should be considered in this case, because the first value can be the sum of
the missing 2 values.
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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = (n * (n + 1)) / 2;

        vector<ll> ps(n);
        vector<bool> pms(n + 1, false);

        for (int i = 0; i < n - 1; i++)
            cin >> ps[i];

        if (ps[n - 2] > sum)
        {
            cout << "NO\n";
            continue;
        }

        else if (sum - ps[n - 2] > n)
        {
            cout << "NO\n";
            continue;
        }

        else if (sum != ps[n - 2])
        {
            ps[n - 1] = sum;

            if (ps[0] <= n)
                pms[ps[0]] = true;
            for (int i = n - 1; i >= 1; i--)
            {
                ll dif = ps[i] - ps[i - 1];
                if (dif <= n)
                    pms[dif] = true;
            }

            bool ok = true;
            for (int i = 1; i <= n; i++)
            {
                if (!pms[i])
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                cout << "YES\n";
            else
                cout << "NO\n";

            continue;
        }

        vector<int> checksums;

        if (ps[0] <= n)
            pms[ps[0]] = true;

        checksums.push_back(ps[0]);
        for (int i = 1; i < n - 1; i++)
        {
            ll dif = ps[i] - ps[i - 1];
            checksums.push_back(dif);
            if (dif <= n)
                pms[dif] = true;
        }

        ll count = 0, rem = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!pms[i])
            {
                count++;
                rem += i;
            }
        }

        if (count != 2)
        {
            cout << "NO\n";
            continue;
        }

        bool last = false;

        for (auto chk : checksums)
        {
            if (rem == chk)
            {
                last = true;
                break;
            }
        }

        if (last)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}