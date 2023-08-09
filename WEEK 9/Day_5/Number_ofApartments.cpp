/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/

// https://codeforces.com/contest/1430/problem/A
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

        //here this is the easiest approach where at first we eliminate the numbers which can't
        //contain any room type's window which are 1, 2, 4
        //and any other value can be possible to form with other elements.
        //suppose 11 => 2 1 0, 12 => 0 1 1. like this

        //then we go on with a approach that is, if we compare wtih 3, we can easily get the 
        //other number's combination with it because 3 is the least number here. 
        //suppose 10. so, n% 3 == 1. We simply subtract 7 from the number and take the quotient as
        //3 rooms' apartments and 1 7 rooms apartment also.
        //then 2. like this. 14. we take (14-5)/3 = 3. and 1 as 5's place.

        if (n == 1 || n == 2 || n == 4)
            cout << -1 << nln;
        else if (n % 3 == 0)
            cout << n / 3 << " " << 0 << " " << 0 << nln;
        else if (n % 3 == 1)
            cout << (n - 7) / 3 << " " << 0 << " " << 1 << nln;
        else
            cout << (n - 5) / 3 << " " << 1 << " " << 0 << nln;
    }

    return 0;
}