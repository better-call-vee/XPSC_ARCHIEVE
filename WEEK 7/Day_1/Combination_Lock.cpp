// https://codeforces.com/problemset/problem/1097/B
// bit and subset related problem
// our goal is to reach to the point to unlock which is 0 to mod 360.
// it's quite like 0-1 knapsack.
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

    int n;
    cin >> n;

    vector<int> lock(n);

    for (int i = 0; i < n; i++)
        cin >> lock[i];

    bool got = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0) // checking if the jth bit is 0 or not... suppose, i = 7
                // so i = 1 1 1. now we enter this j loop.
                // 1 1 1 & 1 << 0 will be & between 1 1 1 & 1. which will be 1. adding
                // next 1 1 1 & 1 << 1 will be & between 1 1 1 & 1 0. every time the 1 is being shifted
                // left to compare. It will be shifted till reaching the nth place from the right to left.
                // every time we are shifting it's being 2 to the power j and thus, 1 << j.
                ans += lock[j];
            else
                ans -= lock[j];
        }

        if (ans % 360 == 0)
        {
            got = true;
            break;
        }
    }
    if (got)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}