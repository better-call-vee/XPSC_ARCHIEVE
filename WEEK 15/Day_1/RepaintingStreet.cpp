/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 15th September, 2023 19:35:15 GMT+6
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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> blds(n);
        set<int> emni;
        for (int i = 0; i < n; i++)
        {
            cin >> blds[i];
            emni.insert(blds[i]);
        }

        int ans = INT_MAX;
        for (auto clr : emni)
        {
            int rp = 0;
            for (int i = 0; i < n; i++)
                if (blds[i] != clr)
                {
                    rp++;
                    i += (k - 1);
                }
            ans = min(rp, ans);
        }
        cout << ans << "\n";
    }

    return 0;
}