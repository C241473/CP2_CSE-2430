#include <iostream>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    char A[105][105];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    int X, Y;
    cin >> X >> Y;
    X--; Y--; 
 
    bool allX = true;
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;
            int nx = X + dx, ny = Y + dy;
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (A[nx][ny] != 'x') allX = false;
            }
        }
    }
 
    if (allX) cout << "yes";
    else cout << "no";
    return 0;
}
