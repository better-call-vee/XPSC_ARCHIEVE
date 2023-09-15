/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 16th September, 2023 00:23:17 GMT+6
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                                                                   \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

struct Movie_end
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    }
};

int main()
{
    fast;

    int n, a, b;
    cin >> n;

    vector<pair<int, int>> movies;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        movies.push_back({a, b});
    }

    sort(movies.begin(), movies.end(), Movie_end());

    int last = movies[0].second, cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (movies[i].first >= last)
        {
            cnt++;
            last = movies[i].second;
        }
    }

    cout << cnt + 1;

    return 0;
}