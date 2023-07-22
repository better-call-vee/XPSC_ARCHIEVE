// https://codeforces.com/contest/1850/problem/F

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

        vector<int> trap(n);
        vector<int> freq(n + 1, 0); // we are storing the frequencies of the numbers present 1 to
        // n in this array.

        for (int i = 0; i < n; i++)
        {
            cin >> trap[i];
            if (trap[i] <= n) // storing the frequencies
                freq[trap[i]]++;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int div_cnt = 0; // we are counting the divisors present in the input array
            // of the selected number
            for (int num = 1; num * num <= i; num++)
            { // we are checking every number from 1 to √n to reduce the time complexity. And it's
                // enough to check all the numbers.
                if (i % num == 0)
                {
                    div_cnt += freq[num]; // if the selected number is divisible by the candidate
                    // trap position, we add the frequency of that number in the array to the
                    // count

                    if (num * num != i) // we can't leave the values greater than the selected num.
                        // so we check if the candidate trap is the square of the selected number or not.
                        // if yes then it's not worth to do the next step. let's analyse:
                        // suppose the candidate trap is 6. we select the number 2. 2*2 is not equivalent
                        // to 6. so the check is passed. √6 will be floored to 2 and thus the loop will
                        // run 2 times and we can only select numbers 1 and 2. but 3 is also can be divisible
                        // by 6. so we do the next step:
                        div_cnt += freq[i / num]; // we take the count of 3 from freq and add it to div_cnt.
                }
                // suppose, the candidate trap is 9 and the selected number is 3. 3*3 is 9. if we also
                // take freq[i/x] here, then it will be wrong and 3's frequency will be taken twice.
            }
            ans = max(ans, div_cnt); // finally taking the max of div_cnt through the loop from 1 to n
        }
        cout << ans << "\n";
    }
    // and we are done.

    return 0;
}