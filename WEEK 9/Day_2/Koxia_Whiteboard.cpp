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
        ll n, m;
        cin >> n >> m;

        multiset<ll> KW;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll inp;
            cin >> inp;
            KW.insert(inp);
            sum += inp;
        }

        for (int i = 1; i <= m; i++)
        {
            ll rplc;
            cin >> rplc;
            sum -= *KW.begin();
            KW.erase(KW.begin());
            sum += rplc;
            KW.insert(rplc);
        }

        cout << sum << "\n";
    }

    return 0;
}