#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int unique = 1, left = 0, right = 0;
        string ans = "";
        int inp = 97;

        while (right < n)
        {
            if (unique < b)
            {
                ans += char(inp);
                inp++;
                unique++;
                right++;
            }

            else
            {
                if (right - left < a)
                {
                    ans += char(inp);
                    right++;
                }
                else
                {
                    ans += ans[left];
                    right++;
                    left++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}




/*
also,
https://codeforces.com/contest/1335/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i) {
			cout << char('a' + i % b);
		}
		cout << endl;
	}
	
	return 0;
}
*/