/*
https://codeforces.com/problemset/problem/1790/D
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

simulate with this test case:
1 2 2 2 4 5 6 7 7 8 12
or
2 2 3 4 4
everytime we take an element from the front of the multiset and go until we don't find any subsequent
value. if we don't then we increase the count by 1. and we erase the doll from our set after taking 
it and everytime finding it's subsequent one.
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> inp(n);
        multiset<ll> trk;

        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
            trk.insert(inp[i]);
        }

        ll cnt = 0;
        while (!trk.empty())
        {
            ll go = *trk.begin();
            trk.erase(trk.begin());

            ll srch = go + 1;
            auto s = trk.find(srch);
            if (s != trk.end())
            {
                while (s != trk.end())
                {
                    trk.erase(s);
                    srch++;
                    s = trk.find(srch);
                }
                cnt++;
            }
            else
                cnt++;
        }
        cout << cnt << nln;
    }

    return 0;
}