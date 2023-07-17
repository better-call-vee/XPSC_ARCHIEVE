#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int t;
    cin >> t;
    
    while(t--) {
        int maxo = INT_MIN, avoid = -1, sum = 0;
        vector<int>mono(4,0);
        for(int i=0; i<4; i++) {
            cin >> mono[i];
            if(mono[i]>maxo) {
                maxo = mono[i];
                avoid = i;
            }
            sum+=mono[i];
        }
        
        if(sum-mono[avoid] < mono[avoid]) cout<<"YES\n";
        else cout<<"NO\n";
    }
        
    return 0;
}