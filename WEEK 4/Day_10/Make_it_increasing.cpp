//https://codeforces.com/problemset/problem/1675/B
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

        vector<ll> inc(n, 0);

        bool kaajhobe = true;
        for (int i = 0; i < n; i++)
            cin >> inc[i];

        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        int opr = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (inc[i] >= inc[i + 1] && inc[i] > 0)
            {
                inc[i] /= 2;
                opr++;
            }
            if (inc[i] == inc[i + 1])
            {
                kaajhobe = false;
                break;
            }
        }
        if (kaajhobe)
            cout << opr << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}