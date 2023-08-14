/*
https://codeforces.com/contest/1604/problem/B
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
        vector<int> xors(n);

        for (int i = 0; i < n; i++)
            cin >> xors[i];

        if (n % 2 == 0)
            cout << "YES\n";
        else
        {
            bool gotcha = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (xors[i + 1] <= xors[i])
                {
                    gotcha = true;
                    break;
                }
            }
            if (gotcha)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

/*
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define line cout << '\n';
const string nln = "\n";

 we know if there are even numbers, we can easily
  divide them into n parts and make the xor 0. else if the n is odd, if there is
    at least a single pair which is equal or the righter one is less, then we're done, we
     can make the xor 0 easily by eliminating one or more elements.
     
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> xors(n);

        bool check = true;
        for (int i = 0; i < n; i++)
        {
            cin >> xors[i];
            check &= xors[i] > xors[i - 1];
        }

        if (n % 2 == or !check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
*/