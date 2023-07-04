#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

/*
This is a grueling problem to solve.
6
logic
codeforces
bca
aaaaaaaaaaa
adbaadabad
to
9 4
1 4 3 5
16 10
1 8 3 4 9 5 2 6 7 10
1 2
1 3
0 11
1 2 3 4 5 6 7 8 9 10 11
3 10
1 4 5 7 9 3 8 2 6 10
5 2
1 2

here is a test case and sample output. we will be given string and we have to reach from string[0] to
string[last index] with minimum cost and maximum steps.
for example:
logic
the cost will be defined by the characters' ascii values. One think is if we calculate (l-c) = 9.
and if we go l -> i -> g -> c => the approximate cost will be 9.
*/
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        string inp;
        cin >> inp; // at first we take the input.

        int sz = inp.size();
        map<char, vector<int>> jump; // then we take a map of vector to store the characters and their
        // indices.
        // we have taken the vector because there maybe multiple occurances of the character.
        // suppose, aaaa. here if we didn't take the vector, we would face a bad situation because
        // there will be only jump[a] = 4.
        /*
        but we want jump[a] = 1;
        jump[a] = 2;
        jump[a] = 3;
        jump[a] = 4;
        */

        for (int i = 0; i < sz; i++)
            jump[inp[i]].push_back(i); //pushing the indices for the characters. in map, the string 
            //will be automatically sorted.

        int go; //then we take a variable to detect the path. if the first character is smaller 
        //than the last character, we will go from the first character to the last character.
        //else we will go backward(from the last character to the first character)

        if (inp[0] < inp[sz - 1])
            go = 1;
        else
            go = -1;

        vector<int> ans;

        for (char c = inp[0]; c != inp[sz - 1] + go; c += go)
            for (auto now : jump[c])
                ans.push_back(now);
        /*
        let's do a simulation:
        suppose: code
        here, the first character is smaller than the last character. So, we go forward. we run the 
        loop until we go beyond the last character.
        code. we start with c. which is not equivalent to inp[sz-1]+go. look here we go one character
        by one. at first c, then d, then e, then f, then g, then h...., till the last character. if
        we reach here p, we break(because that meets the condition inp[sz-1] + go)
        now, when we find any character which present in the map(at first we got c), we simply 
        push back the indices.
        */

        int cost = 0;
        for (int i = 1; i < ans.size(); i++)
            cost += abs(inp[ans[i]] - inp[ans[i - 1]]);

        cout << cost << " " << ans.size() << "\n";

        for (auto now : ans)
            cout << now + 1 << " ";

        cout << "\n";
    }

    return 0;
}