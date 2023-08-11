/*
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1552&mosmsg=Submission+received+with+ID+28685746
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

    int n;
    cin >> n;
    vector<int> chimps(n);
    for (int i = 0; i < n; i++)
        cin >> chimps[i];

    int q;
    cin >> q;

    while (q--)
    {
        int luchu;
        cin >> luchu;

        auto chimp1 = lower_bound(chimps.begin(), chimps.end(), luchu);
        if (chimp1 != chimps.begin())
            cout << chimps[chimp1 - chimps.begin() - 1] << " ";
        else
            cout << "X ";

        auto chimp2 = upper_bound(chimps.begin(), chimps.end(), luchu);
        if (chimp2 != chimps.end())
            cout << chimps[chimp2 - chimps.begin()] << nln;
        else
            cout << "X" << nln;
    }

    return 0;
}

/*
Playboy luchu is not satisfied with his wifey. So, he goes on searching for more ladies and
flirt with them. His wife is so short. He wants to find an immediate shorter lady or immediate
taller lady.not same heighted lady of him.
*/