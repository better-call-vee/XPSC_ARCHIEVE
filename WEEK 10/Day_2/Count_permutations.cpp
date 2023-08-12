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
//there will be n!/2 permutations which will meet the given condition. for n =1 , which is actually
//2, it will have two permutations, 1, 2 and 2, 1 look it's reversed. so, half of the permutation
//will meet the condition, and the rest half will not. they are the reversed permutations of those
//half.
    while (t--)
    {
        int n;
        cin >> n;
        n += n;

        ll ans = 1;
        for (int i = 3; i <= n; i++) // 2 skipped because division by 2.
        {
            ans = ans * i;
            ans = ans % 1000000007;
        }
        cout << ans << "\n";
    }

    return 0;
}
