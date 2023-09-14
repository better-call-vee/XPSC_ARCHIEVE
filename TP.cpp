#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x: a) cin >> x;
    int p = 0;
    while (p < n && a[p] <= p+1) p++;
    vector<int> seen(p+1);
    for (int x: a) {
      if (x <= p) seen[x] = 1;
    }
    int z = 0;
    for (int i = 0; i <= p; i++) {
      if (!seen[i]) z = i;
    }
    while (z != -1) {
      cout << z << endl;
      cin >> z;
    }
  }
}
