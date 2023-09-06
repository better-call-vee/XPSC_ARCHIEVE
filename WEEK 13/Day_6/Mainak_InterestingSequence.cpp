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
// https://codeforces.com/problemset/problem/1726/B
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

    while(t--) {
        int n, m;
        cin >> n >> m;

        if(n > m) {
            cout<<"No\n";
            continue;
        }

        vector<int>ans(n);
        ll sum = 0;
        if(n%2 && m%2) {
            cout<<"Yes\n";
            for(int i=1; i<=n-2; i++) {
                ans[i] = 1;
                sum++;
            }
            ans[n-1] = (m-sum)/2;
            ans[n] = ans[n-1];
        }
        else if(n%2 == 1 and m%2 == 0) {
            cout<<"Yes\n";
        }
    }

    return 0;
}