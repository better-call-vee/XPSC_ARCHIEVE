// https://codeforces.com/contest/1807/problem/D

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
        int n, q;
        cin >> n >> q;

        vector<int> nums(n + 1);
        vector<int> psum(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> nums[i];

        psum[1] = nums[1];

        for (int i = 2; i <= n; i++)
            psum[i] = nums[i] + psum[i - 1];

        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int range = r - l + 1;
            ll change = range * k;
            ll exclude;
            if (l > 1)
                exclude = (psum[l] - psum[l - 1]) + (psum[r] - psum[l]);
            else
                exclude = psum[r];

            ll rem = psum[n] - exclude;

            if (rem % 2 == 0 && change % 2 != 0)
                cout << "YES\n";
            else if (rem % 2 != 0 && change % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}