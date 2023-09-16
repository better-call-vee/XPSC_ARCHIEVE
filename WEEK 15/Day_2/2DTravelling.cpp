/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 10th September, 2023 21:08:42 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);
const ll dhur = 1e18;
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<ll, ll>> cities(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll x, y;
            cin >> x >> y;
            cities[i] = make_pair(x, y);
        }

        ll direct = abs(cities[a].first - cities[b].first) +
                    abs(cities[a].second - cities[b].second);

        ll mini_strt = dhur, mini_end = dhur;
        for (int i = 1; i <= k; i++)
        {
            ll cmp = abs(cities[a].first - cities[i].first) +
                     abs(cities[a].second - cities[i].second);
            mini_strt = min(mini_strt, cmp);

            ll cmp2 = abs(cities[b].first - cities[i].first) +
                      abs(cities[b].second - cities[i].second);
            mini_end = min(mini_end, cmp2);
        }
        ll trick = mini_strt + mini_end;

        cout << min(direct, trick) << "\n";
    }

    return 0;
}