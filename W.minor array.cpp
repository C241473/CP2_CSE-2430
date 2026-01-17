#include <iostream>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    long long A[105][105];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
