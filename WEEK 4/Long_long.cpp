// https://codeforces.com/contest/1843/problem/B

/*
here in the problem, we are given a number of integers. We need to find the max sum of them by executing
some operations. 
for example:
6
-1 7 -4 -2 5 -8
here, for the first operation, we make -1 1. 
each operation can make a block of numbers positive from negative. And a block gets cancelled if we 
face any number greater than 0. here we got 7 and thus, we cancelled the block. then we start our
next operation and stop at the number 5. our last operation stops at -8. so in total, we need to 
execute 3 total operations here.
Our main objective here is to make the negative numbers positive to get the maximum sum.
And a operation is counted until we get a number greater than 0.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = 0, sum = 0;

        bool prev = true;
        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            if (a < 0 && prev)
            {
                ans++;
                prev = false;
            }

            if (a > 0)
                prev = true;
            sum += abs(a);
        }

        cout << sum << " " << ans << endl;
    }
    return 0;
}