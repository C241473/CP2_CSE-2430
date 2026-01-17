#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int answer = INT_MAX; 
 
    for (int i = 0; i < N; i++) {
        int count = 0;
        long long x = A[i];
    
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        answer = min(answer, count);
    }
 
    cout << answer << "\n";
    return 0;
}
