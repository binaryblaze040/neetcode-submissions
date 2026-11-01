class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;

        vector<int> ans(2, 0);

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (numMap.contains(diff)) {
                ans[0] = numMap[diff];
                ans[1] = i;
                return ans;
            }
            else {
                numMap[nums[i]] = i;
            }
        }
        return ans;
    }
};
