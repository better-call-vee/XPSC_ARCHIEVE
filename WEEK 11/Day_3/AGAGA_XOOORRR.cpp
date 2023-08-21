/*
//https://codeforces.com/contest/1516/problem/B
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

easy problem, but tricky. just check if one part's XOR is equivalent to the other part.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

bool check(const vector<int> &go, int sz)
{
    int curr = 0;

    for (int i = 0; i < sz; i++)
    {
        curr = curr xor go[i];
        int rest = 0, match = 0;
        for (int j = i + 1; j < sz; j++)
        {
            rest = rest xor go[j];
            if (rest == curr)
                match = true;
        }
        if (rest == curr or (rest == 0 and match)) /* If the XOR of the remaining elements is 0, it
          means that there are even occurrences of each unique number. Now, if there was a previous
           point (match = true) where rest was equal to curr, it means that we can make all elements
           equal by performing the operation. The remaining elements will cancel each other out due
           to the XOR operation, leaving at least two elements standing.*/
            return true;
    }
    return false;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        if (check(nums, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}