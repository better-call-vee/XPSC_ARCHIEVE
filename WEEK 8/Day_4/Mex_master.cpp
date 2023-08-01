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

        vector<int> mex(n);

        int zeroes = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> mex[i];
            if (mex[i] == 0)
                zeroes++;
        }

        int rem = n - zeroes;
        if (zeroes == 0)
            cout << 0 << "\n";
        else if (zeroes - rem <= 1)
            cout << 0 << "\n";
        else
        {
            int maxo = *max_element(mex.begin(), mex.end());
            // suppose, 0 0 0 1. the max is 1 and we can't make any reordering to make
            // the minimum value here 0 or 1. so answer is 2.
            // but 0 3 7 0 0 0 5 0 , we can make the minimum value 1.
            if (maxo == 1)
                cout << 2 << "\n";
            else
                cout << 1 << "\n";
        }
    }

    return 0;
}