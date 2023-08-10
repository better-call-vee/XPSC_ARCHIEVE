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

        vector<int> arrclr(n);
        int oddCnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arrclr[i];
            if (arrclr[i] % 2 != 0)
                oddCnt++;
        }

        if (oddCnt % 2 == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}