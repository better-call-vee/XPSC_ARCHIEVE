/*
https://codeforces.com/contest/1857/problem/C
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

the logic here is: the least number will have at least n-1 appearance in the a array. the
second least number will have n-2. the third least will have n-3. and thus goes on.
finally we simply push the last value, which is bigger number or the maximum number.
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

        int b = (n * (n - 1)) / 2;

        vector<int> all(b);
        vector<int> exp;
        for (int i = 0; i < b; i++)
            cin >> all[i];

        sort(all.begin(), all.end());
        int pp = *max_element(all.begin(), all.end());

        int seq = 1, pos = 0;
        while (pos < b)
        {
            exp.push_back(all[pos]);
            pos += n - seq;
            seq++;
        }
        exp.push_back(pp);
        for (int i = 0; i < n; i++)
            cout << exp[i] << " ";
        line;
    }

    return 0;
}