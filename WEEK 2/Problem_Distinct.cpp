//Greedy Algorithm
//https://codeforces.com/contest/1692/problem/B

#include <bits/stdc++.h>
using namespace std;

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
        vector<int> arr(n);
        int maxo = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxo = max(maxo, arr[i]);
        }

        vector<int> freq(maxo + 1, 0);

        for (int i = 0; i < n; i++)
            freq[arr[i]]++;

        int dis = 0;

        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] > 0)
            {
                dis++;
                freq[arr[i]] = 0;
            }
        }

        if (n % 2 == 0 && dis % 2 == 0)
            cout << dis << "\n";
        else if (n == dis)
            cout << dis << "\n";
        else if (n % 2 != 0 && dis % 2 != 0)
            cout << dis << "\n";
        else
            cout << dis - 1 << "\n";
    }
    return 0;
}