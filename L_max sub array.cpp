#include <bits/stdc++.h>
   using namespace std;
   using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int mina[n];

    for(int i=0;i<n;i++)
        {
        cin>>mina[i];
       }
    for(int i=0;i<n;i++)
    {
        int m=mina[i];
        for(int j=i;j<n;j++)
        {
            m=max(m,mina[j]);
            cout<<m<<" ";
        }
     }
     cout<<endl;
    }
    return 0;
}
