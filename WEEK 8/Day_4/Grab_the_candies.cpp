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

        vector<int> candies(n + 1);

        int oddsum = 0, evensum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> candies[i];
            if (candies[i] % 2 == 0)
                evensum += candies[i];
            else
                oddsum += candies[i];
        }

        if (evensum > oddsum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}