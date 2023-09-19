/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 18th September, 2023 20:39:06 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (n < k || x < k - 1)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans;

        bool done = false;
        int inc = 0;
        for (int i = 0; i < n; i++)
        {
            if (inc == k && !done)
            {
                if (x != k)
                    ans.push_back(x);
                else
                    ans.push_back(x - 1);
                done = true;
                continue;
            }
            if (done && x != k)
                ans.push_back(x);
            else if (done && x == k)
                ans.push_back(x - 1);
            else if (!done)
            {
                ans.push_back(inc);
                inc++;
            }
        }

        ll sum = accumulate(ans.begin(), ans.end(), 0LL);
        cout << sum << "\n";
    }

    return 0;
}