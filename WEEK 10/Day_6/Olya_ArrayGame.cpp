/*
https://codeforces.com/contest/1859/problem/B
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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll secMins = 0, lsm = INT_MAX, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int sz;
            cin >> sz;
            vector<ll> trk(sz);
            for (int i = 0; i < sz; i++)
                cin >> trk[i];
            sort(trk.begin(), trk.end());

            mini = min(mini, trk[0]);
            lsm = min(lsm, trk[1]); 

            secMins += trk[1];
        }
        //the approach is simple. We take the second minimums from all the arrays. And then
        //finally we subtract the least second minimum and add the most minimum numbers among
        //the array.
        //the reason?
        //well, we can move one element from each array to another array
        //we can add elements to an array as many times as we want, but we can move element one time
        //so, we take the array which have the least second minimum value. and we then add
        //the minimum element from every other array to that array. and finally we add the most
        //minimum value among all arrays while subtracting the least second minimum value which
        //is obtained by that array.
        cout << secMins - lsm + mini << "\n";
    }

    return 0;
}