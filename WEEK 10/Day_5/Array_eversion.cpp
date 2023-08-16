// https://codeforces.com/contest/1591/problem/B
#include <bits/stdc++.h>
using namespace std;
#ifdef __LOCAL__
#include "debug_local.h"
#endif
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define line cout << '\n';
const string nln = "\n";

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

        for (int i = 0; i < n; i++)
            cin >> arr[i];

#ifdef __LOCAL__
        // Debugging code to print the array
        cerr << "Input array: ";
        for (int x : arr)
            cerr << x << " ";
        cerr << '\n';
#endif

        int ans = -1, maxi = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (maxi < arr[i])
            {
                ans++;
                maxi = arr[i];
            }
        }

        cout << ans << nln;
    }

    return 0;
}
