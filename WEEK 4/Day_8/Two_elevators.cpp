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
        int a, b, c;
        cin >> a >> b >> c;
 
        int e1 = 0;
        int e2 = 0;
 
        if (a > 1)
            e1 = a - 1;
 
        if ((b == 1 || b > 1) && c > b)
            e2 = (c - b) + (c - 1);
        else if (b > 1 && c < b)
            e2 = b - 1;
 
        if (e1 == e2)
            cout << 3 << "\n";
        else if (e1 < e2)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
 
    return 0;
}