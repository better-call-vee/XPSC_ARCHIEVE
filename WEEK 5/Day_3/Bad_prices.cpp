// https://codeforces.com/contest/1213/problem/B
/*
Explaining a test case:
Prices: [3, 9, 4, 6, 7, 5]
To calculate the number of days with bad prices, we compare each price with the prices of the
subsequent days. If we find a lower price on a later day, we count it as a bad price.

Comparing the prices:
Day 1: Price 3
Day 2: Price 9 (bad price, as a lower price of 4 is found on day 3)
Day 3: Price 4
Day 4: Price 6 (bad price, as a lower price of 5 is found on day 6)
Day 5: Price 7 (bad price, as a lower price of 7 is found on day)
Day 6: Price 5
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

        vector<int> prices(n);
        for (int i = 0; i < n; ++i)
            cin >> prices[i];

        stack<int> later;
        int count = 0;

        for (int i = 0; i < n; ++i) // this is a complicated part of the solution to understand.
        {
            while (!stack.empty() && prices[i] < prices[later.top()]) 
            {
                later.pop(); // we pop until the stack is not being empty + the top of the stack
                // has a value less than the current chosen value. and everytime we increase the
                // count.
                count++;
            }

            later.push(i); // we push everytime every price's index. but before that, we go to a
            // checking procedure with the while loop.
            //throughout the traversal, if we don't find any value greater than the first pushed
            //stack item(price[0]), the answer will be 0.
            //everytime we get a greater value, we go into popping the elements until the current
            //price is less than the top. and then eventually the current element is pushed in the
            //stack. if there is less value than the current value, the less value will be present
            //in the stack as well(before the current value)
        }

        cout << count << "\n";
    }

    return 0;
}