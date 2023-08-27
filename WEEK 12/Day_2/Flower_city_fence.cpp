 /*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
https://codeforces.com/contest/1862/problem/C

here I just have to check that if the current planks index number
has it's element's height numbered planks or not. Think deeply to
get this.
Actually when you put the fences from vertical to horizontal, you
have to maintain the size.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

bool check(vector<int> &chk, int num, int times)
{
    if (chk.size() < times)
        return false;
    return chk[times - 1] >= num;
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
        vector<int> planks(n);

        for (int i = 0; i < n; i++)
            cin >> planks[i];

        bool hobena = false;
        for (int i = 0; i < n; i++)
        {
            if (!check(planks, i + 1, planks[i]))
            {
                hobena = true;
                break;
            }
        }

        if (hobena)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}