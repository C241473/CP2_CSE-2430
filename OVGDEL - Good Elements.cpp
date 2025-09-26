#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        int n;
        cin >> n;

        int a[10005];
        int freq[1000005] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int good = 0;

        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            bool ok = false;

            if (x == 1)
            {

                if (freq[1] > 1) ok = true;
            }
            else
            {


                if (freq[1] > 0)
                {
                    ok = true;
                }

                else if (freq[x] > 1)
                {
                    ok = true;
                }

                else
                {
                    long long p = x * 1LL * x;
                    while (p <= 1000000)
                    {
                        if (freq[p] > 0)
                        {
                            ok = true;
                            break;
                        }
                        p *= x;
                        if (p > 1000000) break;
                    }
                }
            }

            if (ok) good++;
        }

        cout << "Case " << cs << ": " << good << "\n";
    }

    return 0;
}
