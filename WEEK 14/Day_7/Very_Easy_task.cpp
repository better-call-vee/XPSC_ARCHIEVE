/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 14th September, 2023 15:57:42 GMT+6
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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

    int n, x, y;
    cin >> n >> x >> y;

    if (n == 1)
    {
        cout << min(x, y);
        return 0;
    }

    ll left = 1, right = (ll)n * max(x, y), ans = 0;

    while (left <= right)
    {
        ll mid = (right + left) / 2;
        ll copies = mid / x + mid / y;

        if (copies >= n - 1)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    cout << ans + min(x, y);

    return 0;
}