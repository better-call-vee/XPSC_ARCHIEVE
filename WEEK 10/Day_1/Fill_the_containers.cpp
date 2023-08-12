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
I will be given a number of milk vessels. I have to fill containers with milk from the vessels.
I have to maintain the order of the vessels(can't sort). There is a condition: if I take a vessel
to fill a container, I have to fill the container with the milk of that vessel no matter what if
the milk overflow the container. 
I have to give output the maximum spacious container possible to use maintaining the given maximum
count of them (m).
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