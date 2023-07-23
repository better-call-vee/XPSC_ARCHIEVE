// https://www.codechef.com/problems/BITEQU?tab=statement

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
        ll n;
        cin >> n;

        ll a = pow(2, 32); //taking a and b the highest possible compared to n. otherwise, lower
        //values will collide with others while we need the distinct numbers to form the pair.
        ll b = pow(2, 33); //but the & of this two will generate 0.
        //and of any two 2^ numbers is 0.there is 0 in every bit comparison between them.

        if (n == 0)
            cout << 1 << " " << 3 << " " << 4 << " " << 5 << "\n"; //handling corner cases
        else if (n == 1)
            cout << 1 << " " << 4 << " " << 3 << " " << 2 << "\n";
        else
        {
            (n % 2 == 0) ? (n += 1) : (n -= 1); //if the number n is even we just add one with it.
            //you might think why addition, we could subtract? but when n=2, if we substract, then
            //n will be 1 which is equivalent to the third number. 
            //NOT ONLY THAT, we can't get the n by doing XOR with n-=1 for even numbers.
            //suppose n=4. if we XOR 3 with 1, we don't get 4. but doing with 5, we can get 4.
            cout << a << " " << b << " " << 1 << " " << n << "\n";
        }
        /*
        what is the concept behind this else segment??
        Look we take 2^32 and 2^33 which will always generate their and operation result 0. 
        then we OR 0 with 1. which will upshot 1. remaining only a XOR operation.
        if the number is even and we XOR the number+1 with 1, we get that exact number.
        if the number is odd and we XOR the number-1(an immediate even number) with 1, then we get
        the exact n. that's the concept.
        */
    }

    return 0;
}

/*
//another solution:
#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n == 0)cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
        else{

            long long a = 1, b =2 , c = 0,d = 0;
            for(long long i = 3;i<=1000000;++i){ //taking i till 10^6 to avoid excess time
            //complexity.
                long long cur = n^i;
                if(i == cur || cur<=2)continue;
                c = i;
                d = cur;
                break;
            }
            if(c == 0)cout<<"-1\n";
            else cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
        }
    }
}
*/