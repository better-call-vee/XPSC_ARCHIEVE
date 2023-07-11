// https://codeforces.com/contest/1742/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

vector<int> stored[1001];

int main()
{
    fast;
    // for this problem we generally face TLE if we don't follow the storing technique.
    for (int i = 1; i <= 1000; i++)
        for (int j = 1; j <= 1000; j++)
            if (GCD(i, j) == 1)
                stored[i].push_back(j);
    // as the range of the elements of the array is 1≤element≤1000, we can simply store the coprime
    // pairs in a 2D vector. Coprime are those number pairs, which has the GCD of 1/ no other common
    // divisor greater than 1.
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> coprime[1001];

        for (int i = 1; i <= n; i++)
        {
            int inp;
            cin >> inp;

            coprime[inp].push_back(i);
        }
        /*
        Here we took another 2D vector, to store the numbers and their indices. the numbers will be
        the vector's index number and they will store their indices.
        */
        int ans = -1;

        for (int i = 1; i <= 1000; i++)
            for (int j : stored[i])
                if (!coprime[i].empty() && !coprime[j].empty())
                    ans = max(ans, coprime[i].back() + coprime[j].back());

        /*
        here we are traversing each and every pair and checking if the taken inputs of the coprime
        vector has any value stored regarding the pair value.
        Suppose,
        5
        1 2 3 4 5
        initially 1 with have coprime pair with all of the rest.
        after entering this traversing loop:
        we take coprime[1]'s last index(to get the maximum sum).
        and we then traverse stored[1]'s every peer. first 2, then 3, then 4, then 5.
        we set the ans.
        eventually we get the max ans of all pairs.
        */

        cout << ans << "\n";
    }

    return 0;
}