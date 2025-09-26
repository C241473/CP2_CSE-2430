#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> s;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (!s.count(a[i]))
        {
            s.insert(a[i]);
            ans.push_back(i + 1);
        }
    }

    if (ans.size() < k)
        cout << "NO";
    else
    {
        cout << "YES\n";
        for (int i = 0; i < k; i++)
            cout << ans[i] << " ";
    }

    return 0;
}
