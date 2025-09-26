#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        int n = arr.size();
        long long result = 0;
        for (int i = 0; i < n; i++) {
            result += (long long)arr[i] * (i + 1) * (n - i);
        }
        return result;
    }
};
