/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 14th September, 2023 12:43:00 GMT+6
*/
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
        vector<int> nums(n);

        int mex = n;
        bool paisi = false;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] != i && !paisi)
            {
                mex = i;
                paisi = true;
            }
        }

        cout << mex << "\n";
        cout.flush();

        int bob;
        cin >> bob;
        while (bob != -1)
        {
            if (bob == -2)
            {
                cout << "Wrong Answer\n";
                cout.flush();
                exit(0);
            }
            else
            {
                cout << bob << "\n";
                cout.flush();
            }
            cin >> bob;
        }
    }

    return 0;
}