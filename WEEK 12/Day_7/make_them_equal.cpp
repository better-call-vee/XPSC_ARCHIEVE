/*
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

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    bool paisi = false;
    set<int, greater<int>> go(nums.begin(), nums.end());
    auto trk = go.begin();
    trk++;
    int cmp = *trk, d;
    for (int i = 1; i <= 100; i++)
    {
        d = abs(cmp - i);
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] < i)
                sum += (nums[j] + d);
            else if (nums[j] == i)
                sum += i;
            else
                sum += (nums[j] - d);
        }
        if (i == 3)
        {
            cout << sum << "\n";
            cout << cmp << "\n";
            cout << d << "\n";
        }
        if (sum / (i + cmp) == n && sum % (i + cmp) == 0)
        {
            paisi = true;
            d = i;
            break;
        }
    }

    if (paisi)
        cout << d;
    else
        cout << -1;

    return 0;
}