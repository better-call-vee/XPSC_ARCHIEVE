/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 14th September, 2023 17:05:54 GMT+6
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

    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    ll running_sum = 0;
    sort(coins.begin(), coins.end());

    for (auto coin : coins)
    {
        if (coin > running_sum + 1)
            break;
        running_sum += coin;
    }

    cout << running_sum + 1 << "\n";
    return 0;
}