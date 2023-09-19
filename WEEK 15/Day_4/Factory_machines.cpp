/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
https://cses.fi/problemset/task/1620
created: 18th September, 2023 15:47:34 GMT+6
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

    int n, t;
    cin >> n >> t;

    vector<ll> machines(n);
    for (int i = 0; i < n; i++)
        cin >> machines[i];

    ll left = 1, right = 1e18, ans = -1;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2, count = 0;
        for (int i = 0; i < n; i++)
        {
            count += (mid / machines[i]);
            if (count >= t)
            {
                ans = mid;
                break;
            }
        }

        if (ans == mid)
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << ans;

    return 0;
}

//this is an epic shit problem.
/*
We have to find the most efficient way to use the machines to produce t products.
so, it's a direct binary search approach. Just learn the technique. Specially, when it becomes 1e18 seconds!
the variable we need to take care for the time(ans), observe that nigge.
and remember two things, if you got that shit, go mid - 1, else mid + 1. 
and left <= right. oka?
you mistook, remember? chill man.
*/