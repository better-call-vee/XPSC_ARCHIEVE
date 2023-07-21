// https://codeforces.com/problemset/problem/1805/A

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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int got = -1;
        for (int i = 0; i < (1 << 8); i++)
        { // according to the constraints of the question, we can easily
            // decide that we can go for this number of operations because it doesn't exceed the time
            // limit. (10^3 x 2^8) max
            int ans = 0;

            for (int j = 0; j < n; j++)
                ans = (ans ^ (arr[j] ^ i));

            if (ans == 0)
            {
                got = i;
                break;
            }
        }

        cout << got << "\n";
    }

    return 0;
}