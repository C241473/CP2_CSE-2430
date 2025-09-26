#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long maxProduct = 0;


        for (int i = 0; i < n; i++) {
            vector<int> b = a;
            b[i]++;

            long long product = 1;
            for (int x : b) {
                product *= x;
            }

            maxProduct = max(maxProduct, product);
        }

        cout << maxProduct << endl;
    }

    return 0;
}
