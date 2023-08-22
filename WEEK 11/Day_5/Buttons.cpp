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

int main()
{
  fast;

  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
      c % 2 == 0 ? cout << "Second\n" : cout << "First\n";
    }
    else
    {
      if (c % 2 == 0)
        a > b ? cout << "First\n" : cout << "Second\n";
      else
        a >= b ? cout << "First\n" : cout << "Second\n";
    }
  }
  return 0;
}