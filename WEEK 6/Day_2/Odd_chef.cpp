// https://www.codechef.com/problems/CHEFODD?tab=statement
// this needs explanation. hard problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int N, K;
    cin >> N >> K;

    if (N % 2 == 0)
        // at first we take the odd count in between 1 to N. If N is even=> means there
        // are same numbered odd and even counts. ex: 14/2 = 7. there are 7 odds(1, 3, 5, 7, 9, 11, 13)
        oddcount = N / 2;
    else
        oddcount = N / 2 + 1; // if N is odd(suppose 7) odd count is 4 => 1, 3, 5, 7.

    if (N >= 2 * K) // checking if enough elements are present or not. because there's a condition
    // we need at least 2 elements per subset. suppose, N is 14 and K is 15. it won't work and
    // directly it's a red flag.
    {
        int AfterFirstTake = oddcount - K; // we take one odd number for each subset at first so
        // that the sums of the subsets are odd for sure.
        if (AfterFirstTake % 2 == 0) // now if the remaining odds are odd numbered we can make each
            // subset odd sum.
            /*
            7 => 1, 2, 3, 4, 5, 6, 7 => odd count 4. suppose K = 1.
            after first take we have 3 odds. If we add those 3 odds in that subset then the count 
            of odds in that subset will be even and thus the sum will be even as well.
            */
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";

    return 0;
}