// https://codeforces.com/contest/1798/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int MAX = 50000;
// another grueling problem to understand
int main()
{
    fast;

    vector<int> last(MAX + 777, -1); // at first we store the last day data of the
    // lottery participants. for that we take a vector with the max size.

    int t;
    cin >> t;

    while (t--)
    {
        int m;
        cin >> m; // input of the days

        vector<vector<int>> a_; // now we take another 2D vector. we needed
        // this one to store each day's participants data.
        for (int day = 0; day < m; day++)
        {
            int n;
            cin >> n;
            vector<int> a(n); // here is the vector for each day. each day participants.
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                last[a[i]] = day; // everytime we take a participant, we simply
                // update his last day by the outer loop's present count because
                // the outer loop is running on day count.
            }
            a_.push_back(a); //now we push the whole day participants data into the 
            //a_ vector.
        }

        vector<int> ans(m, -1); //here we will store our answer.
        for (int day = 0; day < m; day++)
        {
            for (int x : a_[day]) //we will take each day's participants 
                if (last[x] == day) //if the selected day's any participant's last
                //day is allocated with the current running day(outer loop count),
                //we simply set the answer of that day to that participant(x)
                    ans[day] = x;

            if (ans[day] == -1)
            { 
                cout << -1 << endl;
                break;
            }

            //here is a twist.
            //suppose:
            /*
            2
            2
            1 2
            2
            2 1
            here, both of their last days are allocated with day 1. and day 0 got 
            no one. and thus in the inner for loop, day 0 won't have any answer and
            it will remain -1. so, eventually answer = -1 and we get a break statement.
            */
        }

        if (ans[m - 1] != -1) //for this break statement, the day(outer loop) can't reach 
        //the end of the count and eventually we get ans[m-1] = -1 also.
        {
            for (int i = 0; i < m; i++)
                cout << ans[i] << " ";

            cout << endl;
        }
    }

    return 0;
}
