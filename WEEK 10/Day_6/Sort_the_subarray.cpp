/*
https://codeforces.com/problemset/problem/1821/B
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/
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
        int n;
        cin >> n;

        vector<int> arr(n + 1);
        vector<int> srtd(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
            cin >> srtd[i];

        bool left = false, right = false;
        int l = 1, r = n, start, end;
        while (true)
        {
            if (!left && arr[l] != srtd[l])
            {
                left = true;
                start = l;
            }
            if (!right && arr[r] != srtd[r])
            {
                right = true;
                end = r;
            }
            if (left and right)
                break;
            l++;
            r--;
        }

        int low = srtd[start], up = srtd[end];

        for (int i = start - 1; i >= 1; i--)
        {
            if (arr[i] <= low)
                start--;
            else
                break;
            low = arr[i];
        }

        for (int i = end + 1; i <= n; i++)
        {
            if (arr[i] >= up)
                end++;
            else
                break;
            up = arr[i];
        }
        cout << start << " " << end << "\n";
    }
    return 0;
}