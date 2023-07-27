//https://www.codechef.com/problems/OPMIN
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mini = *min_element(a.begin(), a.end());

        int mC = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == mini)
                mC++;

        cout << n - mC << "\n";
    }

    return 0;
}