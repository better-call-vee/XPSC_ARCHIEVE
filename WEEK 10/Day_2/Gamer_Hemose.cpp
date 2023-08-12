/*
https://codeforces.com/contest/1592/problem/A
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, H;
        cin >> n >> H;

        vector<ll> weapons(n);
        for (int i = 0; i < n; i++)
            cin >> weapons[i];

        sort(weapons.begin(), weapons.end());

        ll max1 = weapons[n - 1];
        ll max2 = weapons[n - 2];

        if (H <= max1)
            cout << 1 << "\n";
        else if (H <= (max1 + max2))
            cout << 2 << "\n";
        else
        {
            ll cmp = max1 + max2;
            ll quo = H / cmp;
            ll left = H % cmp;

            if (left == 0)
                quo = quo * 2;
            else if (left > max1)
                quo = (quo * 2) + 2;
            else
                quo = (quo * 2) + 1;
            cout << quo << "\n";
        }
    }

    return 0;
}