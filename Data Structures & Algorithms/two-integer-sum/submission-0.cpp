class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ansPair(2);
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (index.count(diff)) {
                ansPair[0] = index[diff];
                ansPair[1] = i;

                return ansPair;
            }

            if (!index.count(nums[i])) {
                index[nums[i]] = i;
            }
        }

        return ansPair;
    }
};
