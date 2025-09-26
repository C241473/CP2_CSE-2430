#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) cin >> A[i];
 
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int mx = A[i];
                for (int k = i; k <= j; k++) {
                    if (A[k] > mx) mx = A[k];
                }
                cout << mx << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}
