#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += h[i];
    }

    long long minSum = currentSum;
    int index = 1;

    for (int i = k; i < n; i++) {
        currentSum += h[i] - h[i - k];
        if (currentSum < minSum) {
            minSum = currentSum;
            index = i - k + 2;
        }
    }

    cout << index << endl;
    return 0;
}
