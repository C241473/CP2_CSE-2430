#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        
        cout<<(x>0 ? 1:(x<0 ? 2:0))<<" ";
       
    }
    cout<<endl;
    
    return 0;
}


