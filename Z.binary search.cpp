#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, Q;
    cin >> N >> Q;
    long long A[100005];
    for (int i = 0; i < N; i++) cin >> A[i];
 
    sort(A, A + N);
 
    while (Q--) {
        long long X;
        cin >> X;
        if (binary_search(A, A + N, X)) cout << "found\n";
        else cout << "not found\n";
    }
 
    return 0;
}
