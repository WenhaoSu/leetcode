#include <climits>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int> &nums) {
        int num3 = INT_MIN;
        stack<int> st;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < num3) return true;
            while (!st.empty() && nums[i] > st.top()) {
                num3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};