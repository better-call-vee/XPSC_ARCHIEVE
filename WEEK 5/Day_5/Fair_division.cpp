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

        vector<int> freq(2, 0);

        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            if (inp == 1)
                freq[0]++;
            else
                freq[1]++;
        }

        int sum = freq[0] * 1 + freq[1] * 2;
        if (freq[0] % 2 == 0 && freq[1] % 2 == 0)
            cout << "YES\n";
        else if (sum % 2 == 0 && (freq[0] % 2 == 0) && freq[0] > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}