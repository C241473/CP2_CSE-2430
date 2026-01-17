#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
 
        long long count = 0;
 
       
        for (int i = 0; i < N; i++) {
            long long current_max_len = 1;
            count++; 
 
            for (int j = i + 1; j < N; j++) {
                if (A[j] >= A[j - 1]) {
                    current_max_len++;
                    count++; 
                } else {
                    break; 
                }
            }
        }
 
        cout << count << "\n";
    }
 
    return 0;
}
