#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool checkFib(int n) {
        int a = 5 * n * n + 4;
        int b = 5 * n * n - 4;

        int sqrtA = (int)sqrt(a);
        int sqrtB = (int)sqrt(b);

        return (sqrtA * sqrtA == a) || (sqrtB * sqrtB == b);
    }

    vector<int> findFibSubset(vector<int> &arr) {
        vector<int> result;
        for (int x : arr) {
            if (checkFib(x)) {
                result.push_back(x);
            }
        }
        return result;
    }
};
