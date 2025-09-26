
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_map<char, int> mp;
        for(auto i : s)
        {
            mp[i]++;
        }
        int unique = 0;
        int c = 0;
        for(auto i : mp)
        {
            if(i.ss == 1)
            unique++;
            else
            c++;
        }
        cout<<c+(unique/2)<<endl;
    }
    return 0;
}
