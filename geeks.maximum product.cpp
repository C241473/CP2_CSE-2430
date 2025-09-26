#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxProductSubarrayOfSizeK(vector<int> &x, int k) {
        sort(x.begin(), x.end());
        int y = 0;
        int z = x.size() - 1;
        long long product = 1;

        if (k % 2 == 1) {
            product *= x[z];
            z--;
            k--;
        }

        while (k > 0) {
            long long leftPair = (long long)x[y] * x[y + 1];
            long long rightPair = (long long)x[z] * x[z - 1];

            if (leftPair > rightPair) {
                product *= leftPair;
                y += 2;
            } else {
                product *= rightPair;
                z -= 2;
            }
            k -= 2;
        }

        return product;
    }
};
