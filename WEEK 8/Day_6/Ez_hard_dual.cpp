// https://codeforces.com/contest/1855/problem/C2
//there are three types of arrays. full positive, full negative, and a mixture.
//if we do prefix sums/ suffix sums(for negatives), we can sort out the operations easily.
//but for mixture, we have to do other things.
//suppose, there are mixture:
//like -2 3 4 -8 23 2
//we will simply make all the negatives to positives first by the max positive number.
// now, all the numbers will be positive and finally we will just take the prefix sums and indices.
//another example: -2 -9 12 -18 17 2 3
//so, here we can see the negative has the highest absolute value which is 18. we will make all
//the positives negative and then suffix sums.
//but what if there are more than 12 negative numbers, and we have only one positive number, which
// is the maximum absolute value present! should we make all the negatives positive??
//that will exceed the limit of operations which is 31.
//so we will make the absolute maximum negative number(minNeg) less than -20. and then we will make
//the positives to negatives. and finally suffix sums.
//same goes for positive majority.

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
        int n, posCnt = 0, negCnt = 0, zero = 0, maxPos = 0, minNeg = 0, maxPosIdx = 0, minNegIdx = 0;
        cin >> n;
        vector<int> inp(n);
        vector<pair<int, int>> ops;

        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
            if (inp[i] > 0)
            {
                posCnt++;
                if (inp[i] > maxPos)
                {
                    maxPos = inp[i];
                    maxPosIdx = i;
                }
            }
            else if (inp[i] < 0)
            {
                negCnt++;
                if (inp[i] < minNeg)
                {
                    minNeg = inp[i];
                    minNegIdx = i;
                }
            }
            else
                zero++;
        }

        if (negCnt == 0)
        {
            for (int i = 1; i < n; i++)    // the output is one indexed
                ops.push_back({i + 1, i}); // prefix sum
        }

        else if (posCnt == 0)
        {
            for (int i = n - 1; i > 0; i--) // the output is one indexed
                ops.push_back({i, i + 1});  // suffix sum
        }

        else if (posCnt > 12)
        {
            while (inp[maxPosIdx] < 20)
            {
                ops.push_back({maxPosIdx + 1, maxPosIdx + 1});
                inp[maxPosIdx] *= 2;
            }

            for (int i = 0; i < n; i++)
            {
                if (inp[i] < 0)
                    ops.push_back({i + 1, maxPosIdx + 1});
            }

            for (int i = 1; i < n; i++)
                ops.push_back({i + 1, i});
        }

        else if (negCnt > 12)
        {
            while (inp[minNegIdx] > -20)
            {
                ops.push_back({minNegIdx + 1, minNegIdx + 1});
                inp[minNegIdx] *= 2;
            }

            for (int i = 0; i < n; i++)
                if (inp[i] > 0)
                    ops.push_back({i + 1, minNegIdx + 1});

            for (int i = n - 1; i > 0; i--)
                ops.push_back({i, i + 1});
        }

        else if (maxPos >= abs(-minNeg))
        {
            for (int i = 0; i < n; i++)
                if (inp[i] < 0)
                    ops.push_back({i + 1, maxPosIdx + 1});

            for (int i = 1; i < n; i++)
                ops.push_back({i + 1, i});
        }

        else
        {
            for (int i = 0; i < n; i++)
                if (inp[i] > 0)
                    ops.push_back({i + 1, minNegIdx + 1});

            for (int i = n - 1; i > 0; i--)
                ops.push_back({i, i + 1});
        }

        cout << ops.size() << "\n";

        for (auto idx : ops)
            cout << idx.first << " " << idx.second << "\n";
    }

    return 0;
}