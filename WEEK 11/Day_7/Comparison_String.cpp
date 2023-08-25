#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1837/problem/B
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int length;
        cin >> length;
        string inputString;
        cin >> inputString;

        int minimumCost = 0; // To store the minimum cost (final answer)

        // Iterate through the string
        for (int i = 0; i < length;)
        {
            int consecutiveCount = 0; // To count consecutive characters that are the same

            // Find the length of the consecutive characters that are the same
            for (int j = i; j < length && inputString[i] == inputString[j]; j++)
                consecutiveCount++;

            // Update the minimum cost with the maximum of the current consecutive count plus one
            minimumCost = max(minimumCost, consecutiveCount + 1);
            /*
            The reason for adding one to the length of the consecutive sequence (consecutiveCount + 1)
            is related to the structure of the problem. In the given string, if there is a sequence
            of consecutive equal characters, the minimum number of distinct elements required to
            represent that sequence in an array is the length of the sequence plus one.
            For example, consider the string <<<<. To represent this sequence in an array, we need
            at least
            five distinct elements: [1, 2, 3, 4, 5].
            */

            // Move to the next sequence of characters
            i += consecutiveCount;
        }

        // Print the result for the current test case
        cout << minimumCost << '\n';
    }

    return 0;
}
