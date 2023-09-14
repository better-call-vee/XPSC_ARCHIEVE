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

    vector<int> apples(n);
    for (int i = 0; i < n; i++)
        cin >> apples[i];
    ll total = accumulate(apples.begin(), apples.end(), 0LL);

    ll mini = total;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll div1 = 0;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
                div1 += apples[i];

        mini = min(mini, abs((total - div1) - div1));
    }

    cout << mini << "\n";
    return 0;
}