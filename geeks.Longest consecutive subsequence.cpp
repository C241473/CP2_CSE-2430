#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int> &arr) {
        unordered_set<int> s;
        for (int num : arr) {
            s.insert(num);
        }

        int longest = 0;
        for (int num : arr) {
            if (s.find(num - 1) == s.end()) {
                int length = 1;
                int current = num;
                while (s.find(current + 1) != s.end()) {
                    current++;
                    length++;
                }
                if (length > longest)
                    longest = length;
            }
        }
        return longest;
    }
};
