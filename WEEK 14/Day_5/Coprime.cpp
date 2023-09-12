/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 12th September, 2023 17:03:23 GMT+6
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
        int n, inp;
        cin >> n;

        map<int, int> numID;
        for (int i = 1; i <= n; i++)
        {
            cin >> inp;
            numID[inp] = i;
        }

        int sum = -1;
        for (auto one = numID.begin(); one != numID.end(); ++one)
            for (auto two = one; two != numID.end(); ++two)
                if (__gcd(one->first, two->first) == 1)
                    sum = max(sum, one->second + two->second);

        cout << sum << "\n";
    }

    return 0;
}