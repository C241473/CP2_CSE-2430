#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int n = arr.size();
        int best = arr[0];
        int current = arr[0];
        
        for (int i = 1; i < n; i++) {
            current = max(arr[i], current + arr[i]);
            best = max(best, current);
        }
        
        return best;
    }
};
