/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
   https://codeforces.com/contest/1864/problem/C
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

bool twos_power(int n)
{
    return (n & (n - 1)) == 0; // to check the number is a 2's power or not. if the and
    // operation of a number and is previous number is 0, then it's definitely will be the
    // power of 2.
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;
        ans.push_back(n);
        while (n != 1) // we want to get the divisor until 1. if we can get it to the nearest
        //2 to the power number, then everytime we can just take half the number and print.
        {
            if (twos_power(n))
            {
                n /= 2;
                ans.push_back(n);
            }
            else
            {
                while (!twos_power(n)) //if not 2's power, we just simply remove the set bits in
                //place of where we need zero. suppose the number is 1100. we need 2's power. the
                //nearest one is 1000(8). so, we remove the second 1. 12 - 4 = 8. 
                {
                    int r_most_set = n & (-n); //it's 4. we use two's complement to do this.
                    //4 gives us the rightmost setbit.
                    n = n - r_most_set;
                    ans.push_back(n);
                }
            }
        }
        cout << ans.size() << "\n";
        for (auto prnt : ans)
            cout << prnt << " ";
        cout << "\n";
    }

    return 0;
}
