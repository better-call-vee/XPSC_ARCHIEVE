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
        int n, k;
        cin >> n >> k;
        vector<int> KP;

        for (int i = n; i >= 1; i--)
            KP.push_back(i);

        int right = n - 1, left = 0;
        if (n % 2 == 0)
        {
            while (right > left)
            {
                cout << KP[left] << " " << KP[right] << " ";
                right--;
                left++;
            }
        }
        else
        {
            while (right >= left)
            {
                if (right == left)
                    cout << KP[left] << " ";
                else
                    cout << KP[left] << " " << KP[right] << " ";

                right--;
                left++;
            }
        }

        cout << "\n";
    }

    return 0;
}