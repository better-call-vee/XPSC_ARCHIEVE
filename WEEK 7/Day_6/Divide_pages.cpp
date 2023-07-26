//codechef.com/problems/BOOKPAGES

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

        vector<int> divP(n);
        int odds = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> divP[i];
            if (divP[i] % 2 != 0)
                odds++;
        }

        if (odds % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
