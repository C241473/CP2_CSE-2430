#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    int i = 0, j = 0;
    while (i < N && j < M) {
        if (A[i] == B[j]) j++;
        i++;
    }

    if (j == M) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
