#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);


//by ANDing all the elements, we can get the minimum value.
//everytime we AND two values, the result is lower/equivalent to the both values. So, everytime
//it reduces the value and doesn't matter what's the range(l-r). we go one by one and thus we get
//the minimum value.
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int res = a[1];
        for (int i = 2; i <= n; i++)
            res &= a[i];

        cout << res << endl;
    }

    return 0;
}