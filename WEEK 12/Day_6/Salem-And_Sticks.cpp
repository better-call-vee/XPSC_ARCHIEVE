// https://codeforces.com/problemset/problem/1105/A
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
    vector<int> stick(n);

    for (int i = 0; i < n; i++)
        cin >> stick[i];

    int t, cost = INT_MAX;
    for (int i = 1; i <= 100; i++)
    {
        int cmp = 0;
        for (int j = 0; j < n; j++)
            if (i != stick[j])
                cmp += (abs(i - stick[j]) - 1);

        if (cost > cmp)
        {
            cost = cmp;
            t = i;
        }
    }

    cout << t << " " << cost << "\n";

    return 0;
}