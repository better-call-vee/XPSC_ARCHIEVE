//https://www.codechef.com/problems/PERMSUBSEQ?tab=statement

/*
here, from 1 to max element have to have at least a frequency of 1 to continue the subsequence;
suppose,
1 3 5 8 9 8
here, 2 doesn't have any frequency. so, the permutation will be counted since 1.

now:
1 2 3 2 4
here, freq[1] = 1;
freq[2] = 2;
freq[3] = 1;
freq[4] = 1;

so, 1 makes 1 subsequence. 2 have frequency of two. so, it can make permutations with 1 twice.
now that 2 has two permutations, 3 can make permutations it's frequency times to 2's permutations.
if there were three 3's, it could make 6 permutations.
*/

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

    ll mod = 1e9 + 7;

    while (t--)
    {
        int N;
        cin >> N;

        vector<int> perm(N);

        for (int i = 0; i < N; i++)
            cin >> perm[i];

        int maxo = *max_element(perm.begin(), perm.end());

        vector<int> freq(maxo + 1, 0);
        for (int i = 0; i < N; i++)
            freq[perm[i]]++;

        ll count = 0, mul = 1;
        for (int i = 1; i <= maxo; i++)
        {
            if (freq[i] == 0)
                break;

            count = (count + ((mul * freq[i]) % mod)) % mod;
            mul = (mul * freq[i]) % mod;
        }

        cout << count << "\n";
    }

    return 0;
}