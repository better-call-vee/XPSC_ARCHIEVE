/*
https://codeforces.com/problemset/problem/1860/C
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
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
            cin >> nums[i];

        vector<int> winners(n);

        int minTillnow = INT_MAX, minBob = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (minTillnow > nums[i]) // if the minimum value among the values left to the current value
            // is greater than the current value, then it must be a winning position for Bob, and
            // a losing position for Alice. Because, when Alice will give the current position,
            // bob will not find any valid index/element to move. (the left elements' MINIMUM is
            //already greater than the current element, so no way)
            {
                minTillnow = nums[i];
                winners[i] = 1;
                continue;
            }
        
            //if Bob can move, then our task is to track the minimum losing state for Bob.
            //losing state means the minimum element if Bob choose, he will definitely win.
            //suppose, 2 4 8 9 3 10 1
            //here, at first minTillnow will be 2. then 4 will be the first losing state. because
            //if Alice gives Bob 4, he has to move to 2, then Alice will be left with no move, thus
            //Alice will win and 4 is a losing state. Then when it will reach 3. minBob < nums[i] 
            //will be false because 4 is greater than 3. Now what? now 3 will be a new losing 
            //state for Bob, means a new lucky number.
            //Finally minTillnow will end up being 1, and it won't be a lucky number because if
            //Alice gives this position to bob at first, Bob won't be able to move according to the
            //rules.
            if (minBob < nums[i])
                winners[i] = 1;
            else
            {
                winners[i] = 0;
                minBob = nums[i];
            }
        }

        int lucky = 0;
        for (int i = 0; i < n; i++)
            if (winners[i] == 0)
                lucky++;

        cout << lucky << "\n";
    }

    return 0;
}