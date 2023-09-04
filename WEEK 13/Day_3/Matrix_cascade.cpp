#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1864/D
// our job is to make the whole matrix full of zeroes.
// we can do one operation, if we select a cell with 1, all the
// cells which are down to this and in a triangular shape, they're
// inverted(0 becomes 1, 1 becomes 0)
// it's a hard prefix sum and difference array concept.
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

int left_matrix[3005][3005];
int right_matrix[3005][3005];
int presum[3005][3005];

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> inp(n);
        for (int i = 0; i < n; i++)
            cin >> inp[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                left_matrix[i][j] = 0;
                right_matrix[i][j] = 0;
                presum[i][j] = 0;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                presum[i][j] = left_matrix[i][j] + right_matrix[i][j] +
                               (j - 1 >= 0 ? presum[i][j - 1] : 0);
            // everytime we track the prefix sum of the rows.
            for (int j = 0; j < n; j++)
            {
                char now = inp[i][j];
                if (presum[i][j] % 2) // the prefix sum set on that
                    // cell is 1 means later on it will be 0 automatically
                    // according to the condition
                    now = ((now - '0') ^ 1) + '0';
                /*
(now - '0') converts the character now to its
integer equivalent. For example, if now is '1', (now - '0') would be equal to 1.

((now - '0') ^ 1) performs a bitwise XOR operation with 1. This operation
toggles the bit from 0 to 1 or from 1 to 0. So, if now was '1', this will make
it '0', and if now was '0', this will make it '1'.

+ '0' converts the integer result of the XOR operation back to its character
representation. This will make '1' become '0' and '0' become '1'.
                */
                if (now == '1')
                {
                    ans++;
                    left_matrix[i][j]++;
                    if (j + 1 < n)
                        right_matrix[i][j + 1]--;
                    // we are maintaining two arrays to track. so,
                    // at first we add one to the left track, then we minus
                    // the added value to the right.(difference array technique)
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (i + 1 >= n)
                    break;

                if (j - 1 >= 0)
                    // when we go in the triangular way
                    // and j remains in range and doesn't go negative way
                    left_matrix[i + 1][j - 1] += left_matrix[i][j];
                else
                    left_matrix[i + 1][j] += left_matrix[i][j];
                // if j goes negative way we only go down
                if (j + 1 < n)
                    right_matrix[i + 1][j + 1] += right_matrix[i][j]; // if j+1 is
                // less than n, means there is place for updating the
                // the value to the right, we go updating the place.
            }
        }
        cout << ans << "\n";
    }

    return 0;
}