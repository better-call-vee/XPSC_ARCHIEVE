/*
The problem says: Some amount of candies will be given to n persons.
A person can take candies from a person and only give candies to a single
person. Task is to make all the candies equal so that it becomes a fair
distribution.
A person can give 2^x candies and the other person who is getting 2^x
candies, can give back 2^y candies.
6
3
2 4 3
5
1 2 3 4 5
6
1 4 7 1 5 4
2
20092043 20092043
12
9 9 8 2 4 4 3 5 1 1 1 1
6
2 12 7 16 11 12

In the first test case:
The first person gives 1 candy to the third person;
The second person gives 2 candies to the first person;
The third person gives 1 candy to the second person.
Then all people have 3 candies.

In the second test case:

The fifth person gives 4 candies to the first person, from now on the first
person has 5 candies; The first person gives 2 candies to the third person; The
third person gives 2 candies to the fifth person; The fourth person gives 2
candies to the second person; The second person gives 1 candy to the fourth
person. Now all have 3 candies;

  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 17th September, 2023 14:14:39 GMT+6
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

        vector<int> candies(n);
        for (int i = 0; i < n; i++)
            cin >> candies[i];

        ll total = accumulate(candies.begin(), candies.end(), 0LL);
        if (total % n)
        {
            cout << "NO\n";
            continue;
        }
        // straight forward observation: if we can't equally distribute all the
        // candies, means, total mod n is not 0. it's a straight no. next
        // observation is :any number's power or 2's power - 2's power or any
        // number's power will not be the same. 2^1 - 2^3 = 6. 2^2 - 2^3 = 4.
        // and like this, we will count the pairs. if it's possible to
        // make all the candies equal, then there will be same amount of
        // bits for different positions for each side(given, taken).
        ll equalizer = total / n;
        vector<int> check(32, 0);

        for (int i = 0; i < n; i++)
        {
            ll needed = candies[i] - equalizer;
            if (needed == 0)
                continue;

            int add = -1, remove = -1;
            for (int y = 0; y <= 30; y++) // y for add bits
            {
                ll twoPowerx =
                    needed + (1ll << y); // needed is constant here. x is the
                                         // current user's given candies' bits
                if (twoPowerx > 0 && __builtin_popcountll(twoPowerx) == 1)
                {
                    int x = __builtin_ctzll(twoPowerx); // gives us where is that one
                    add = y;
                    remove = x; // the bit to remove to balance
                    break;      // once gotten, no need to check again
                }
            }

            if (add == -1)
            {
                cout << "NO\n";
                goto skip;
            }

            check[add]++;
            check[remove]--;
        }

        for (int i = 0; i < 32; i++)
            if (check[i])
            {
                cout << "NO\n";
                goto skip;
            }

        cout << "YES\n";

    skip:
        continue;
    }
    return 0;
}