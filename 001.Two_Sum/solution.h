#include <iostream>
#include <unordered_map>
#include <vector>
using std::vector;
using std::unordered_map;

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> curr;
        for (int i = 0; i < nums.size(); i++) {
            if (curr.find(target - nums[i]) != curr.end()) {
                return vector < int > {curr[target - nums[i]], i};
            }
            curr[nums[i]] = i;
        }
    }
};