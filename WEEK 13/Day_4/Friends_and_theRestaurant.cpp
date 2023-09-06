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
        int n, budg;
        cin >> n;
        vector<int> exp(n), diff;

        for (int i = 0; i < n; i++)
            cin >> exp[i];
        for (int i = 0; i < n; i++)
        {
            cin >> budg;
            diff.push_back(budg - exp[i]);
        }
        sort(diff.begin(), diff.end(), greater<int>());

        int left = 0, right = n - 1, cnt = 0;
        while (left < right)
        {
            if (diff[left] + diff[right] >= 0)
            {
                left++;
                right--;
                cnt++;
            }
            else
                right--;
        }

        cout << cnt << "\n";
    }

    return 0;
}