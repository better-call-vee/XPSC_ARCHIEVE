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

    int X, Y, H;
    cin >> X >> Y >> H;

    cout << X + (H - 1) * Y;
    return 0;
}