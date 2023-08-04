// https://codeforces.com/contest/845/problem/C

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
    map<ll, ll> shows;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        shows[l]++;
        shows[r + 1]--;
    }

    ll tv = 0;
    bool naah = false;
    for (auto go : shows)
    {
        tv += go.second;
        if (tv > 2)
        {
            naah = true;
            break;
        }
    }

    if (naah)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}