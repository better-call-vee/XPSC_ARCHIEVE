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

    vector<int> chips(n);
    int odds = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> chips[i];
        odds += chips[i] & 1; // this is to count the odd numbers.
        // this is a logical expression. This works like a even/odd extractor.
        // let me explain:
        // if the chips[i] = even(suppose 6), the binary representation is 110 and which
        // ends with 0(Least Significant Bit). Now if it AND with 1 it will show false(0), means it's
        // not odd, it's even.
        // Same, suppose 7, binary = 111, it will output 1(means we got an odd biatch)
    }

    cout << min(odds, n - odds); // We took the minimum of odds and the (n-odds) because sometimes
    // there maybe more odds than evens.

/*
let's simulate:
6
4 5 6 7 8 9
the answer is 3. why? here the number of odd and even elements are the same.
suppose we want to shift all the odd elements to 5. 7 to 5, 9 to 5 won't cost. but 6 to 5, 8 to 5 
will cost.

7
2 4 6 8 10 12 14
here we will need 0 coins. we move the co-ordinates by two and which will cost 0. here all the
elements are evens. 
*/
    

    return 0;
}