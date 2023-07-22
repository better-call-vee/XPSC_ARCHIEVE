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

        vector<int> div(n + 1, 0);
        for (int i = 1; i <= n; i++)
            div[i] = i;

        int sum = (n * (n + 1)) / 2;

        if (sum % n == 0)
        {
            for (int i = 1; i <= n; i++)
                cout << div[i] << " ";
        }

        else
        {
            int rem = sum % n;
            div[1] += rem;

            for (int i = 1; i <= n; i++)
                cout << div[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}