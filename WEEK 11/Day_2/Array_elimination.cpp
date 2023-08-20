/*
https://codeforces.com/problemset/problem/1601/A
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
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

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        vector<int> ColumnBitCnt(30, 0);
        for (int i = 0; i < 30; i++)
        {
            ll bitcmp = (1LL << i);
            for (int j = 0; j < n; j++)
                if (nums[j] & bitcmp)
                    ColumnBitCnt[i]++;
        }

        for (int k = 1; k <= n; k++)
        {
            bool hobe = true;
            for (int i = 0; i < 30; i++)
            {
                if (ColumnBitCnt[i] % k != 0)
                {
                    hobe = false;
                    break;
                }
            }
            if (hobe)
                cout << k << " ";
        }

        cout << "\n";
    }

    return 0;
}

/*

here, a observation and trick is working:
look at the following example:
13 7 25 19
0 1 1 0 1 => 13
0 0 1 1 1 => 7
1 1 0 0 1 => 25
1 0 0 1 1 => 19
---------
2 2 2 2 4  bits count in every column.

here, if I take the 19 and 25 and do & operation on them, and then, subtracting them with the result:
0 1 1 0 1 => 13
0 0 1 1 1 => 7
0 1 0 0 0 => 25
0 0 0 1 0 => 19   by which, 25 becomes 8 and 19 becomes 2. 
---------

look, the main observation is, if the sum of all the setbits in the same column/bit is divisible by
a possible k(% k == 0), then it will definitely possible to make it 0 eventually.
If the count of set bits in a column is divisible by k, then you can perform the operation
(as described in point 2) exactly count/k times to reduce the count to 0.
Number A:  1 1 0 1
             ‾
Number B:  1 1 1 1
             ‾
The underlined bits are in the same column.
Bitwise AND: 1 1 0 1 & 1 1 1 1 = 1 1 0 1
                                   ‾
The result has a set bit in the same column.
Subtracting the Result: XOR
1 1 0 1 - 1 1 0 1 = 1 0 0 0
  ‾         ‾         ‾
1 1 1 1 - 1 1 0 1 = 1 0 1 0
  ‾         ‾         ‾
The set bits in the specific column have been changed to unset bits (0) in both numbers. We have 
reduced the count of set bits in that column by 2 (since k=2)

for, k = 3, we won't be able to do this here
*/