#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1216/problem/D
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("out.txt", "w", stdout);
    freopen("inp.txt", "r", stdin);
#endif

    int n;
    cin >> n;

    vector<ll> swords(n);
    for (int i = 0; i < n; i++)
        cin >> swords[i];

    if (n == 2)
    {
        cout << 1 << " " << abs(swords[0] - swords[1]) << "\n";
        return 0;
    }

    ll maxi = *max_element(swords.begin(), swords.end());
    ll stolen_gcd = maxi - swords[0];
    ll total_stolen = 0;
    for (int i = 0; i < n; i++)
    {
        ll stolen_from_i = maxi - swords[i];
        stolen_gcd = gcd(stolen_gcd, stolen_from_i);
        total_stolen += stolen_from_i;
    }
    /*
    Each person took z swords of some type, so the number of
    stolen swords of each type will be multiples of z. Therefore,
    the GCD of stolen swords from all types will give the value of
    y people.
    */
    cout << total_stolen / stolen_gcd << " " << stolen_gcd << "\n";

    return 0;
}
