#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    long long X = 0;
    for (int i = 0; i < n; i++) if (y[i] == 1) X += x[i];

    long long Y = 0;
    for (int i = 0; i < k; i++) if (y[i] == 0) Y += x[i];

    long long Z = Y;
    for (int i = k; i < n; i++) {
        if (y[i] == 0) Y += x[i];
        if (y[i - k] == 0) Y -= x[i - k];
        Z = max(Z, Y);
    }

    cout << X + Z << endl;
    return 0;
}
