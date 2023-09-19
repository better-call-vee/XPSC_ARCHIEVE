/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
https://cses.fi/problemset/task/1073     
created: 18th September, 2023 13:08:10 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);
 
int main()
{
    fast;
 
    int n, cube;
    cin >> n;
 
    vector<int> towers;
    for (int i = 0; i < n; i++)
    {
        cin >> cube;
        auto check = upper_bound(towers.begin(), towers.end(), cube);
 
        if (check == towers.end())
            towers.push_back(cube);
        else
            *check = cube;
    }
    cout << towers.size();
 
    return 0;
}


/*
another epic shit from CSES.
everytime, we go on searching the upper bound because, if any greater
element is there, we can place the cube on it. So, look, upper_bound is 
a blessing, it will automatically select the most efficient one for this. 
suppose, there are two cubes already. first, 5 got in, then 10.
now, we have to place 2. where it will be placed to make it efficient???
on 5. and upper_bound dude will select 5.
Vee got this. chill
*/