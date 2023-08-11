/*
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408&fbclid=IwAR02obU23CMTuMGRzOk39uLr8jyOLLiNYj6-aSgXTmro59FeYR2HRLGXzAk
   +----------------------+
  /                        \
 /    *   TANVEE009   *     \
 \  **  I CAN, I WILL  **   /
  \  +-----------------+   /
   +----------------------+
*/
#include <bits/stdc++.h>
using namespace std;
/*
I will be given
*/
int main()
{
    int n, m;
    while (cin >> n >> m)
    {

        vector<int> milk(n);
        for (int i = 0; i < n; i++)
            cin >> milk[i];
        int maxo = *max_element(milk.begin(), milk.end());

        int left = maxo, right = 1e6, ans;
        while (left <= right)
        {
            int container = left + (right - left) / 2;
            int cnt = 1, cap = 0;
            for (int i = 0; i < n; i++)
            {
                cap += milk[i];
                if (cap > container)
                {
                    cap = milk[i];
                    cnt++;
                }
            }
            if (cnt > m)
                left = container + 1;
            else
            {
                ans = container;
                right = container - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}