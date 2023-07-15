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

    int T;
    cin >> T;

    while (T--)
    {
        int seat;
        cin >> seat;

        if (seat <= 10)
            cout << "Lower Double\n";
        else if (seat >= 11 && seat <= 15)
            cout << "Lower Single\n";
        else if (seat >= 16 && seat <= 25)
            cout << "Upper Double\n";
        else
            cout << "Upper Single\n";
    }

    return 0;
}