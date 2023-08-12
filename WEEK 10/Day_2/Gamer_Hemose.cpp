/*
https://codeforces.com/contest/1592/problem/A
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
        int n, H;
        cin >> n >> H;

        vector<int> weapons(n);
        for (int i = 0; i < n; i++)
            cin >> weapons[i];

        sort(weapons.begin(), weapons.end());

        int max1 = weapons[n - 1];
        int max2 = weapons[n - 2];
        int cnt;

        if (H <= max1)
            cout << 1 << "\n";
        else if (H <= max1 + max2)
            cout << 2 << "\n";
        else
        {
            while (H > 0){
                
            }
        }
    }

    return 0;
}