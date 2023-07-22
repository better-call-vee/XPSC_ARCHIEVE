// https://codeforces.com/problemset/problem/1420/B
// A very interesting math and bitmask problem.
// we have to count the pairs in an array which have greater or equal & value than XOR value.

/*
5
1 4 3 7 10
here, the only pair is 4 and 7. So, if we & them we can see
1  1  1             1  1  1
1  0  0             1  0  0  XOR
-------            ---------
1  0  0             0  1  1
What can we understand from this? if the left most bit is 1 for both the numbers then we can get
the greater value for & operation because 1 & 1 is 1 but 1 ^ 1 is 0.
So, we will start from the 32th bit and count the numbers where there is such numbers with a sit
bit on the leftest index. let's code
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
        int n;
        cin >> n;

        vector<int> pairs(n);

        for (int i = 0; i < n; i++)
            cin >> pairs[i];

        vector<int> visited(n); // we have to take this visited array to track the number is taken
        // previously or not.
        // suppose we are checking 1 0 0's left most set bit with other numbers. we take the 1 1 1
        // as our pair number. but then we trigger a number which was taken before by comparing
        // 4th left most set bit. suppose it is 1 1 1 1. we got that before but here we will get
        // again. but we will ignore by tracking it's visited or not.

        ll total = 0;
        for (int i = 31; i >= 0; i--)
        { // 0 indexed calculation. 31 means 32 bits left.
            ll num = 0;
            for (int j = 0; j < n; j++)
            {
                if (((1 << i) & pairs[j]) && !visited[j])
                {
                    visited[j] = true;
                    num++;
                }
            }
            total += (num * (num - 1)) / 2; // counting the number of pairs.This formula is based on the
            // concept of combinations, where you are choosing 2 numbers from n distinct numbers
            // without replacement (i.e., once a number is chosen for a pair, it cannot be chosen again).
            // When you calculate n*(n-1), you count each pair twice because you consider
            // both orders: (A, B) and (B, A). To avoid counting pairs twice and only count each pair
            // once, you need to divide the result by 2.
        }

        cout << total << "\n";
    }

    return 0;
}