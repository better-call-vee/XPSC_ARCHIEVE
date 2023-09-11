/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 11th September, 2023 14:27:26 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        ll sum = accumulate(nums.begin(), nums.end(), 0LL), part = 0,
           maxi = -1e18;

        for (int i = 0; i < n - 1; i++)
        {
            part += nums[i];
            sum -= nums[i];
            maxi = max(maxi, gcd(part, sum));
        }

        cout << maxi << "\n";
    }

    return 0;
}