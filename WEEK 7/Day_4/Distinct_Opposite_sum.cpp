// https://www.codechef.com/problems/DISTOPPSUMS

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

        int mid = n / 2;

        for (int i = mid; i >= 1; i--)
            cout << i << " ";

        for (int i = mid + 1; i <= n; i++)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
