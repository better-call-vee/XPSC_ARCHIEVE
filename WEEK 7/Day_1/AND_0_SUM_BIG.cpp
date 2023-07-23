// https://codeforces.com/problemset/problem/1514/B

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

    ll mod = 1e9 + 7;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll ans = 1;
        for (int i = 0; i < k; i++)
            ans = ans * n % mod;

        cout << ans << "\n";
    }

    return 0;
}

/*
why n^k?

if n = 2 and k = 2;
we have to make arrays of 2 lengths where it will meet the conditions. k=2 means we can have numbers
with 2 bits max. why? the condition is 2^k - 1. 2^k is 4 which is the first number of 3 bits numbers.
2^k - 1 means 3(1 1), last numbers of 2 bits numbers.
we will take column size of k and rows size of n.

n   k ->
1   1  1
2   1  1

at first we take all the numbers with set bits. we know when we make and operations, if one zero 
is there in any column, it will be 0 afterall.
suppose,
 1 1 1
 1 0 1
 0 1 0
 -----
 0 0 0 (so, for and operation, any one 0 in the column can make the and answer 0)

n   k ->
1   1  1
2   1  1
so, here we can add a zero in the columns and only one is enough for each column and it will
also meet the condition of taking all the maximum combinations possible.
the combinations will be:
n   k ->    n   k ->    n   k ->    n   k ->
1   0  0    1   0  1    1   1  1    1   1  0
2   1  1    2   1  0    2   0  0    2   0  1
so, look everytime we have n options to choose where to take the 0. we can choose from n positions from
every column there. so, k bits and n choices everytime. what does it mean?? 
n^k.

*/