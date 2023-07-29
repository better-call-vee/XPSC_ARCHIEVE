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
        int B, C, H;
        cin >> B >> C >> H;
 
        if (B > C + H)
            cout << (C + H) * 2 + 1 << "\n";
 
        else if (B <= C + H)
            cout << B * 2 - 1<<"\n";
    }
 
    return 0;
}