// https://codeforces.com/problemset/problem/1832/C

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

// this is the mountain technique.
// suppose, 5 4 2 1 0 0 4 ;  5 4 3 2 1 ; 1 2 3 4 5
// here, we can see three test cases.
// for the 2nd and 3rd one => the contrast is 4. so, two of them are in an order, either descending
// or ascending.and thus, the contrast can be just got by subtracting the first and the last value.

// now come here for the first test case. here ups and downs are happening and it's like mountains.
// every time ups and downs happening, we will simply take the difference between that point and the
// previous point. then in the end the contrast will be the same as the main array's contrast.
// suppose, 5 4 2 1 0 0 4
// the contrast is 9.
// at first, the array was descending till the 6th index. so we take the dif till then which is 5.
// now we take the dif from there to last while it's being ascending. if there were values present
// less than 4 again. we will recalculate and thus we would have taken another element to get the
// subsequence. so more mountain peaks mean more elements.
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> cv(n);

        for (int i = 0; i < n; i++)
            cin >> cv[i];

        ll contrast = 0;
        for (int i = 0; i < n - 1; i++)
            contrast += abs(cv[i] - cv[i + 1]);

        if (n == 1 || contrast == 0)
        {
            cout << 1 << "\n";
            continue;
        }

        ll count = 1;
        int inc = 0;
        for (int i = 1; i < n; i++)
        {
            if (cv[i] > cv[i - 1] && inc != 1)
            {
                inc = 1;
                count++;
            }
            else if (cv[i] < cv[i - 1] && inc != -1)
            {
                inc = -1;
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}