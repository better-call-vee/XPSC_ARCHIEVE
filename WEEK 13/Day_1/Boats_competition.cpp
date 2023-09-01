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
        vector<int> weights(n);

        for (int i = 0; i < n; i++)
            cin >> weights[i];

        sort(weights.begin(), weights.end());
        int ans = INT_MIN;
        for (int sum = 2; sum <= 2 * n; sum++)
        {
            int left = 0, right = n - 1, teams = 0;
            while (left < right)
            {
                if (weights[left] + weights[right] < sum)
                    left++;
                else if (weights[left] + weights[right] > sum)
                    right--;
                else
                {
                    left++;
                    right--;
                    teams++;
                }
            }
            ans = max(ans, teams);
        }
        cout << ans << "\n";
    }

    return 0;
}