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
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;
    int n;
    cin >> n;
    vector<ll> parts(n);

    for (int i = 0; i < n; i++)
        cin >> parts[i];

    vector<ll> presum(n, 0);
    vector<ll> sufsum(n, 0);
    presum[0] = parts[0];
    sufsum[n - 1] = parts[n - 1];

    for (int i = 1; i < n; i++)
        presum[i] = presum[i - 1] + parts[i];
    for (int i = n - 2; i >= 0; i--)
        sufsum[i] = sufsum[i + 1] + parts[i];

    ll left = 0, right = n - 1, ans = 0;
    while (left < right)
    {
        if (presum[left] > sufsum[right])
            right--;
        else if (presum[left] < sufsum[right])
            left++;
        else
        {
            ans = presum[left];
            right--, left++;
        }
    }
    cout << ans << nln;
    return 0;
}