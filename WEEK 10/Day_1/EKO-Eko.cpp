// https://www.spoj.com/problems/EKO/fbclid=IwAR2CCiz_wINq8BicbHBIpecjLgIPJhb-_a5R7rwYC_8-7fO53V0rX_4qYlE
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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define line cout << '\n';
const string nln = "\n";

int main()
{
    fast;

    int N, M;
    cin >> N >> M;

    vector<int> trees(N);
    for (int i = 0; i < N; i++)
        cin >> trees[i];
    sort(trees.begin(), trees.end());

    ll trk = 0, blade = 0;
    int left = 1, right = trees[N - 1];

    while (left <= right)
    {
        trk = 0;
        ll mid = left + (right - left) / 2; // this is to not overflow with the range. it's eventually (right+left)/2

        for (int i = 0; i < N; i++)
            if (mid < trees[i])
                trk += (trees[i] - mid);

        if (trk >= M)
        {
            left = mid + 1;
            blade = mid;
        }

        else
            right = mid - 1;
    }

    cout << blade;

    return 0;
}