/*
https://codeforces.com/problemset/problem/817/C
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+

here, I have to count the numbers from 1 to n which have less substract value(that number
- it's digit sum) than s.
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

ll digitSum(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    fast;

    ll n, s;
    cin >> n >> s;
    if (n == s || n - digitSum(n) < s)
    {
        cout << 0 << '\n';
        return 0;
    }

    ll left = 1, right = n, count = 0, trk = n;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        ll dsum = digitSum(mid);
        ll cmp = mid - dsum;

        if (cmp >= s)
        {
            count += trk - mid;
            trk = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    cout << count + 1;

    return 0;
}