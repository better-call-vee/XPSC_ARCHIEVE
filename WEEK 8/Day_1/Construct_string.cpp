// https://www.codechef.com/problems/CONSTR

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string u;
        cin >> u;

        for (int i = 0; i < n - 2; i++)
        {
            if (u[i] == u[i + 1] && u[i] == u[i + 2])
            {
                u.erase(i + 1, 2);
                i--; //this is because after erasing two, we have to compare again for the rest.
                //suppose , abbbbbc.
                //after erasing two bs, there are still 3 remaining. we will erase 2 more.
            }
        }

        cout << u;
        cout << "\n";
    }

    return 0;
}