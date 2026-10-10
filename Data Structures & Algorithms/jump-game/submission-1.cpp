class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (maxIndex >= i) {
                maxIndex = max(maxIndex, nums[i]+i);
            }
        }
        return maxIndex >= (nums.size()-1);
    }
};
