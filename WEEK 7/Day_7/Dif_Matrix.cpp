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

        int NewLine = 0, sq = n * n;
        if (n % 2 == 0)
        {
            for (int i = sq; i >= 2; i -= 2)
            {
                NewLine++;
                cout << i << " ";
                if (NewLine == n)
                {
                    cout << "\n";
                    NewLine = 0;
                }
            }

            for (int i = sq - 1; i >= 1; i -= 2)
            {
                NewLine++;
                cout << i << " ";
                if (NewLine == n)
                {
                    cout << "\n";
                    NewLine = 0;
                }
            }
        }

        else
        {
            for (int i = sq; i >= 1; i -= 2)
            {
                NewLine++;
                cout << i << " ";
                if (NewLine == n)
                {
                    cout << "\n";
                    NewLine = 0;
                }
            }

            for (int i = sq - 1; i >= 2; i -= 2)
            {
                NewLine++;
                cout << i << " ";
                if (NewLine == n)
                {
                    cout << "\n";
                    NewLine = 0;
                }
            }
        }
    }

    return 0;
}