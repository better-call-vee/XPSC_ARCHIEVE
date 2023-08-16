
#include <bits/stdc++.h>
#ifdef __LOCAL__
#include <debug_local.h>
#endif
using namespace std;
void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int i, int j)
         { return a[i] > a[j]; });
    vector<int> ans(n + 1);
    ans[0] = 0;
    long long dist = 0;
    for (int i = 0, l = 1, r = -1; i < n; i++)
    {
        if (i % 2)
        {
            dist += 2LL * l * a[ord[i]];
            ans[ord[i] + 1] = l++;
        }
        else
        {
            dist += 2LL * (-r) * a[ord[i]];
            ans[ord[i] + 1] = r--;
        }
    }
    cout << dist << "\n";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        testCase();
    }
    return 0;
}
