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

        string game;
        cin >> game;

        bool alice = true, bob = false;
        int al = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (alice && game[i] == 'A')
                al++;
            else if (alice && game[i] == 'B')
            {
                bob = true;
                alice = false;
            }
            else if (bob && game[i] == 'A')
            {
                bob = false;
                alice = true;
            }
            else if (bob && game[i] == 'B')
                b++;
        }

        cout << al << " " << b << "\n";
    }
    return 0;
}