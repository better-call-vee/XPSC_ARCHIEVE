/*
https://www.spoj.com/problems/AGGRCOW/
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
        ll N, C;
        cin >> N >> C;

        vector<ll> cows(N);
        for (int i = 0; i < N; i++)
            cin >> cows[i];

        sort(cows.begin(), cows.end());

        ll left = 0, right = cows[N - 1], cnt, dist;
        while (left <= right)
        {
            cnt = 1;
            ll mid = left + (right - left) / 2;
            int go = 0;
            while (true)
            {
                ll find = cows[go] + mid;
                auto stall = lower_bound(cows.begin(), cows.end(), find);
                go = stall - cows.begin();
                if (stall != cows.end())
                    cnt++;
                else
                    break;
            }

            if (cnt >= C)
            {
                left = mid + 1;
                dist = mid;
            }
            else
                right = mid - 1;
        }
        cout << dist << nln;
    }

    return 0;
}