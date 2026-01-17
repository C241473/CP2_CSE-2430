#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int A[100][100];
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
 
    int primarySum = 0, secondarySum = 0;
 
    for (int i = 0; i < N; i++) {
        primarySum += A[i][i];            
        secondarySum += A[i][N - i - 1];  
    }
 
    cout << abs(primarySum - secondarySum) << endl;
 
    return 0;
}
