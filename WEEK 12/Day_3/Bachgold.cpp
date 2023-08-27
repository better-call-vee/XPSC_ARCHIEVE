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

int main()
{
    fast;

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    }
    else
    {
        cout << n / 2  << "\n";
        for (int i = 1; i < n / 2; i++)
            cout << 2 << " ";
        cout << 3;
    }

    return 0;
}