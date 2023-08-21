/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

In this problem, I will be given a number of stones and I have to rearrange them in two piles.
And I have to rearrange them in a way that the difference between them is minimum possible.
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

    int n;
    cin >> n;

    vector<int> stones(n);
    int ttlwt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> stones[i];
        ttlwt += stones[i];
    } // we take the total weight of the stones to calculate the pile 2 later.

    int mini = ttlwt; // randomly setting the mini(ans) to the maximum possible value.
    for (int mask = 0; mask < (1 << n); mask++)
    {   // starting masking. less than 1 << n because we have n elements. suppose we have 5 elements.
        // 1 << 5 is 32 which is a 6 bits number. But our main logic is to consider the binary numbers
        // which have n bits. Thus, less than 1 << n. If we find any set bit in the number we simply
        // add it to the pile1 and all the 0 bit positions will be considered as pile2 stones, and
        // everytime we will compare the minimum possible values. there are 31 combinations to compare
        // for 5 elements.
        int pile1 = 0;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i)) //checking which position of the mask have setbits
                pile1 += stones[i];

        int pile2 = ttlwt - pile1;
        mini = min(mini, abs(pile1 - pile2));
    }

    cout << mini;

    return 0;
}

/*
5
5 12 13 29 19
*/