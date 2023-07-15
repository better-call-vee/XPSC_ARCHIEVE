#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";

            cout << '\n';
        }
        else
            cout << -1 << "\n";
    }

    return 0;
}