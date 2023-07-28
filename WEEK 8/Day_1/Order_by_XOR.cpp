/*
You need to find a number X such that A XOR X < B XOR X < C XOR X. If there is no such number,
then you should print -1.

3
1 2 3
3 1 2
3 2 1
Output:
4
-1
3
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int32_t main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;

        if ((A > B) && (B > C))
        {
            int X = A | B | C; // bitwise OR operation. here if the A is biggest number, then
            // we are going to take a big number because, A's XOR value has to be the least.
            // suppose 5 4 2
            // the OR of 5 4 2 will be 1 1 1(7). Now if we XOR each of 5 4 2 with 111, we
            // get 10, 11, 101. so it meets the condition perfectly. what is the logic behind this?
            // If we XOR a bigger value with a big value, we get a small output. And here if we
            // OR, we get at least one in every bit because every number is distinct and thus we get
            // the highest number to do XOR. and thus A is being lessened.
            cout << X << "\n";
        }

        else if ((A < B) && (B < C))
            cout << 0 << "\n"; // if the A, B, C are ascendingly sorted, we just simply take 0 because
        // it's already sorted and XOR with 0 of a number gives the number.

        else
            cout << -1 << "\n"; // else -1.
    }

    return 0;
}
