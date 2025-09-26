#include <bits/stdc++.h>
using namespace std;

int main()
{



    int n;
    cin>> n;

    vector<long long > v(n+1), sorted_v (n+1);
    vector<long long >prefix_original(n+1,0);
    vector<long long >prefix_sorted(n+1,0);



    for(int  i = 1; i<=n; i++)
    {
        cin>> v[i];
        sorted_v[i] = v[i];
    }


    for(int i = 1; i<=n; i++)
    {
        prefix_original[i] = prefix_original[i-1] + v[i];
    }


    sort(sorted_v.begin() +1,sorted_v.end());
    for(int i =1; i<=n; i++)
    {
        prefix_sorted[i] = prefix_sorted[i-1] + sorted_v[i];
    }


    int m;
    cin>>m;

    while(m--)
    {
        int type,l,r;
        cin>>type>>l>>r;

        if(type == 1)
        {
            cout<< prefix_original[r] - prefix_original[l-1] <<endl;
        }
        else
        {
            cout<< prefix_sorted[r] - prefix_sorted[l-1]<<endl;
        }
    }


}
