// https://codeforces.com/problemset/problem/1324/B
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

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int maxi = *max_element(arr.begin(), arr.end());

        vector<int> freq(maxi + 1, 0);
        for (int i = 0; i < n; i++)
            freq[arr[i]]++;

        bool paisi = false;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] >= 2)
            {
                if (freq[arr[i]] >= 3)
                {
                    paisi = true;
                    break;
                }
                freq[arr[i]]--;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i] != arr[j])
                    {
                        paisi = true;
                        break;
                    }
                    else
                        freq[arr[i]]--;

                    if (freq[arr[i]] == 0)
                        break;
                }
            }
            if (paisi)
                break;
        }

        if (paisi)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}