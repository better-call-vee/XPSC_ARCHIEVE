#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    vector<int> stones(n);
    for(int i=0; i<n; i++)
        cin >> stones[i];

    sort(stones.begin(), stones.end());
    int mini = 0;
    for(int i=n-1; i>=0; i--){
        if(mini <= 0) mini += stones[i];
        else mini -= stones[i];
    }

    cout << mini;
    return 0;
}
