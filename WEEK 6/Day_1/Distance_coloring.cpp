#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const ll MOD = 1000000007;

ll factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * factorial(n - 1)) % MOD;
}

ll calculatePower(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        y /= 2;
    }
    return res;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int N, K;
        cin >> N >> K;

        if (K == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        if (N >= K && K > 1)
        {
            ll comb1 = factorial(K);
            ll comb2 = calculatePower(K, N - K);
            if (N == K)
                cout << comb1 % MOD << "\n";
            else
                cout << (comb1 + comb2) % MOD << "\n";
        }

        else if (N < K)
        {
            ll numerator = factorial(K);
            ll denominator = (factorial(K - N) * factorial(N)) % MOD;
            ll comb3 = (numerator * calculatePower(denominator, MOD - 2)) % MOD;
            cout << comb3 << "\n";
        }
    }

    return 0;
}

/*
This solution of mine shows wrong answer. I don't understand the right answer.
#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    const unsigned int M = 1000000007;
	    int n;
	    int k;
	    cin>>n>>k;
	    
	    
    	    unsigned long long int count = 1;
    	   // if(k==n)
    	   // cout<<k<<endl;
    	   // else 
    	   // {
        	    for(int i=0;i<n;i++)
        	    {
        	        if(k>0)
        	       { 
        	           count=(k*count)%M;
        	           k--;
        	       }
        	        else
        	        break;
        	    }
        	 cout<<count<<endl;
    	   // }
        	 
	    
	}
	return 0;
}

here is it.
*/