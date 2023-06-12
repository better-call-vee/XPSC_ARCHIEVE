#include <bits/stdc++.h>
using namespace std;
// The problem:https://codeforces.com/contest/1840/problem/B
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int main()
{
    fast;
    int test;
    cin >> test;

    while (test--)
    { // n means I have n coins and k means a cafe have k numbered drinks(but it's 0 indexed)
        // k=4 means 0, 1, 2, 3.
        // every drink will cost 2 to the power it's index value.
        // the 1st drink will cost 2^0, the 2nd drink 2^1, the 3rd drink 2^2, fourth drink 2^4
        long long n, k;
        cin >> n >> k;
        k = min((int)k, 61); // in the problem statement, there's written the constraint which is
        // 1≤n,k≤10^9. So, if we just take k=60/61. It totally exceeds(2^k) the upper value for n
        // 10^9. If this happens we can't make combinations with the available n coins.

        long long x = ((1ll << k)); // 2^k
        long long y = n + 1ll;
        long long ans = min(x, y);
        /*
        Suppose the example: k=4 and n=10.
        we can make 2^k combinations if we have enough coins. which is 2^4 = 16.
        but we have 10. So, we can make 10 combinations+1(which is zero combinations) = 11.
        we will take the minimum of them.
        */

        cout << ans << endl;
    }

    return 0;
}