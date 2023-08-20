/*
https://codeforces.com/contest/1858/problem/B
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
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
        int n, sellers, brk;
        cin >> n >> sellers >> brk;

        vector<int> stalls(sellers + 2);
        stalls[0] = 1 - brk;
        /*
        Ensures that Petya eats a cookie at the first bench, regardless of whether there is a seller
        there or not. Helps handle the scenario where there might be a seller at the first bench
        by unifying the conditions for eating cookies at all benches.
        By setting stalls[0] = 1 - brk, you are virtually placing a cookie seller brk benches before the
        first real bench. It means that when Petya arrives at the first real bench, exactly brk minutes
        have passed since the last cookie, forcing him to eat a cookie. Simulate to learn more.
        */
        stalls[sellers + 1] = n + 1;
        /*
        This line represents a virtual bench located after the actual last bench (n + 1). It ensures
        that the distance between the last real bench and the end of the walkway is considered in the
        calculations.
        - At the End: Depending on the location of the last real cookie seller and the value of brk,
         Petya may or may not eat a cookie at the last bench.
        - Simulating This Condition: By setting stalls[sellers + 1] = n + 1, you are extending the
        walkway to a virtual bench right after the last real bench. This allows you to calculate 
        whether Petya eats a cookie at the last real bench using the same logic as for other benches.
        - Why It Works: This boundary element allows you to consider the distance between the last 
        real bench and the end of the walkway in the same way you consider distances between other 
        consecutive benches.
        Essentially, this virtual end bench makes the handling of the last real bench consistent 
        with the rest of the benches, avoiding special cases or additional conditions.
        */

        for (int i = 1; i <= sellers; i++)
            cin >> stalls[i];

        int Total = 0; // the calculation of total cookies without the stalls
        for (int i = 1; i < stalls.size(); i++)
            Total += (stalls[i] - stalls[i - 1] - 1) / brk; // the number of cookies that are obtained
        // in between the cookie stalls generally by the calculation of brk.

        int ans = n + 1;          // randomly taking a max number which can never be the answer.
        int possibilitiesCnt = 0; // the count of the possibilities of letting petya eat the
        // minimum number of cookies by removing ONLY a seller.

        for (int i = 1; i <= sellers; i++)
        {
            int cmp = Total;
            cmp -= (stalls[i] - stalls[i - 1] - 1) / brk; // removing the cookies that were calculated
            // previously and stored in Total. from that stall to previous stall.
            cmp -= (stalls[i + 1] - stalls[i] - 1) / brk; // removing the cookies that were calculated
            // previously from that removed stall to the next stall and those were stored in Total.
            cmp += (stalls[i + 1] - stalls[i - 1] - 1) / brk;
            cmp += sellers - 1; // adding the other cookie sellers' cookies except the removed one

            if (cmp < ans)
            {
                ans = cmp;
                possibilitiesCnt = 1; // if we find a totally smaller cookies count than the previous
                // we simply start counting possibilities again.
            }
            else if (cmp == ans)
                possibilitiesCnt++;
        }
        cout << ans << " " << possibilitiesCnt << "\n";
    }

    return 0;
}