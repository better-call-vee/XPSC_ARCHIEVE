/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 15th September, 2023 20:30:12 GMT+6
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

    string inp;
    cin >> inp;

    int n = inp.size();
    if (n == 2 || n == 1)
    {
        cout << inp;
        return 0;
    }

    map<char, int> freq;
    for (int i = 0; i < n; i++)
        freq[inp[i]]++;

    vector<pair<char, int>> to_print;
    char nunu;
    int OddCnt = 0, koytaNunu = 0;
    for (auto mp : freq)
    {
        if (mp.second % 2 != 0)
        {
            OddCnt++;
            nunu = mp.first;
            koytaNunu = mp.second;
        }
        else
            to_print.push_back({mp.first, mp.second / 2});
        if (OddCnt > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }

    for (int i = 0; i < to_print.size(); i++)
        for (int j = 0; j < to_print[i].second; j++)
            cout << to_print[i].first;
    for (int i = 0; i < koytaNunu; i++)
        cout << nunu;
    for (int i = to_print.size() - 1; i >= 0; i--)
        for (int j = 0; j < to_print[i].second; j++)
            cout << to_print[i].first;

    return 0;
}