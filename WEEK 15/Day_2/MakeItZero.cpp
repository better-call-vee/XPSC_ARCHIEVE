/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created:
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
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
        vector<int> inp(n);

        for (int i = 0; i < n; i++)
            cin >> inp[i];

        if (n % 2 == 0)
            cout << 2 << "\n"
                 << "1 " << n << "\n1 " << n << "\n";

        else
        {
            cout << 4 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n - 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n - 1 << " " << n << "\n";
        }
    }

    return 0;
}