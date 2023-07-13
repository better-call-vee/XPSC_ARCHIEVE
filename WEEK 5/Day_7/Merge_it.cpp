// https://codeforces.com/contest/1176/problem/B
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

        vector<int> remainders(3, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            remainders[inp % 3]++; // the remainders vector would have a size of 5 if it was for 5.
            // got it right?
        }

        int count = remainders[0]; // at first we initiate the count with the direct divisor count
        // of 3.

        int possible_pair = min(remainders[1], remainders[2]); // we take the minimum of the
        // remainders to determine the possible number of pair.
        // suppose, [1, 1, 2, 2, 2]. here remainders[1] is 2, remainders[2] is 3. we take the minimum
        // of them which is 2. yes, 2 pairs are possible from these. got it right?

        // now we will add the possible pair with the count.
        count += possible_pair;

        // After pairing up the elements, we need to update the counts of elements with remainders
        // 1 and 2. Subtracting possible_pair remainders[1] and remainders[2] ensures that we remove
        // the paired elements from the counts. Now, remainders[1] and remainders[2] represent the
        // remaining elements that couldn't be paired up.
        remainders[1] -= possible_pair;
        remainders[2] -= possible_pair;

        count += (remainders[1] + remainders[2]) / 3; //finally we search for any other possible
        //combination.
        //suppose, remainders[1] have 2 count left and remainders[2] have 1 count left. we get
        //one more combination. or remainders[1] = 1, remainders[2] = 2, we take one from each to 
        //make another combination and the other one stays unused. like this. 3 or divisible by
        //3 remaining means we have more chances.

        cout << count << "\n";

        return 0;
    }
