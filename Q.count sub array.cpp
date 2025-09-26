#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long count = 1;
        int len = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                len++;
            }
            else
            {
                len = 1;
            }
            count += len;
        }

        cout << count << "\n";
    }

    return 0;
}
