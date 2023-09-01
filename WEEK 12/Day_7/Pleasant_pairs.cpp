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
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);

int main() {
  fast;

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<ll> nums(n + 1);

    for (int i = 1; i <= n; i++) cin >> nums[i];

    int cnt = 0;
    for (int i = 1; i <= n; i++)
      for (int j = nums[i] - i; j <= n; j += nums[i])
        if (j > 0 && i < j)
          if ((nums[i] * nums[j]) == (i + j)) cnt++;

    cout << cnt << "\n";
  }

  return 0;
}