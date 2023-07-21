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

        int count = 0;
        while (n != 0)
        {
            if ((n & (n - 1)) == 0)
                count = n - 1;
            n = (n & (n - 1));
        }

        cout << count << "\n";
    }

    return 0;
}