/*
https://codeforces.com/contest/1864/problem/B
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
        int n, k;
        cin >> n >> k; // n > k

        string inp;
        cin >> inp;

        string even = "", odd = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even += inp[i];
            else
                odd += inp[i]; // 0-indexed
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        if (k % 2 == 0)
        {
            sort(inp.begin(), inp.end());
            cout << inp << "\n";
        }
        /*
        when k is even, it's always possible to make the string sorted.
        suppose, an example: abfhilqrw
        you can make it sorted lexicographically after some operations. but, if k is odd, no
        matter how much you reverse, you can't move the odd indexed character to an even index
        and vise versa. 
        */
        else
        {
            int Etrk = 0, Otrk = 0;
            for (int i = 0; i < n; i++)
                if (i % 2 == 0)
                    cout << even[Etrk++];
                else
                    cout << odd[Otrk++];
            cout << "\n";
        }
    }

    return 0;
}
/*
afrilbqhw
abrfliqhw
abrqilfhw
abfqrlihw
abfhrqilw
abfhlrqiw
abfhliqrw
abfhrqilw
abfhrwliq
abfhilwrq
abfhilqrw 
*/