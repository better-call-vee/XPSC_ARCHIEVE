// https://codeforces.com/problemset/problem/1611/B
/*
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
        int a, b;
        cin >> a >> b;

        cout << min(min(a, b), (a + b) / 4) << nln;
    }

    return 0;
}

/*
Since we must have at least one programmer and one mathematician in each team, the total number of
teams is limited by the smaller of the two groups. If we run out of one group, we can no longer form
valid teams.

We also have to consider the total number of students (programmers + mathematicians) and divide it by
 the size of each team, which is 4. This gives us the maximum number of teams we can form without
 considering their specific roles.

 we bring these together and respecting both, we take the minimum of them eventually
*/