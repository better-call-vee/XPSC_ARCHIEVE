/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 11th September, 2023 20:39:50 GMT+6
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
        int n, j = 0;
        cin >> n;
        multimap<int, int> nums;
        vector<int> perm(n);
        iota(perm.begin(), perm.end(), 1);
        reverse(perm.begin(), perm.end());
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            nums.insert({inp, i});
        }

        vector<int> ans(n);
        for (auto pr : nums)
        {
            ans[pr.second] = perm[j];
            j++;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}