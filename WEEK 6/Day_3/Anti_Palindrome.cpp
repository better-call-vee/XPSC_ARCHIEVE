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

        string pal;
        cin >> pal;

        vector<int> freq(27, 0);

        for (int i = 0; i < n; i++)
            freq[pal[i] - 96]++;

        int odds = 0, evens = 0;
        for (int i = 1; i < 27; i++)
        {
            if (freq[i] % 2 != 0)
                odds++;
            else if (freq[i] % 2 == 0 && freq[i] > 0)
                evens++;
        }

        if (odds > 1 || (n % 2 == 0 && odds == 1))
            cout << 0 << "\n";

        else if (n % 2 != 0 && odds == 1 && evens == 0)
            cout << 2 << "\n";

        else
            cout << 1 << "\n";
    }

    return 0;
}