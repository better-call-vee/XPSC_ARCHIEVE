// https://codeforces.com/contest/1714/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

/*
we need to print the minimum number with distinct digits which make a sum of s.
for that, if we go descending from 9 to 1, we will be able to form the number with the minimum digits.
*/

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;

        if (s < 10)
        {
            cout << s << "\n";
            continue;
        }

        int sum = 0;
        string ans = "";

        for (int i = 9; i >= 1; i--)
        {
            char add = i + '0';

            if (sum + i <= s)
            {
                sum += i;
                ans += add;
            }

            if (sum == s)
                break;
        }

        reverse(ans.begin(), ans.end());

        cout << ans << "\n";
    }

    return 0;
}