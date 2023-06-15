//https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;

    int N, K;
    cin >> N >> K;
    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int l = 0, r = 0, ans = INT_MIN;
    long long sum = 0;

    while (r < N)
    {
        sum += arr[r];

        if (sum > K)
        {
            while (sum > K)
            {
                sum -= arr[l];
                l++;
            }
        }

        if (sum == K)
            ans = max(ans, r - l + 1);

        r++;
    }

    cout << ans;

    return 0;
}
