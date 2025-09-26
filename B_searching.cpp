#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<ll>nazeha(n);

    for(int i=0;i<n;i++){
        cin>>nazeha[i];
    }
    ll target;
    cin>>target;
    bool found=false;

    for(int j=0;j<n;j++){
        if(nazeha[j]==target){
            cout<<j<<endl;
            found=true;
            break;
        }
    }
    if(!found) cout<<-1<<endl;
    return 0;
}

