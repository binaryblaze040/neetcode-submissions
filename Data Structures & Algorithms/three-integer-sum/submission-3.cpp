class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        unordered_set<int> present;

        for (int i = 0; i < nums.size()-2; i++) {
            int l = i+1, r = nums.size()-1, target = (-1 * nums[i]);

            while (l < r) {
                int uniqueNum = ((((nums[i]) * 10) + nums[l]) * 10) + nums[r];

                if (nums[l] + nums[r] == target && !present.contains(uniqueNum)) {
                    vector<int> curr(3);
                    curr[0] = nums[i];
                    curr[1] = nums[l];
                    curr[2] = nums[r];

                    ans.push_back(curr);
                    present.insert(uniqueNum);
                    l++;
                    r--;
                }
                else if (nums[l] + nums[r] < target) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }

        return ans;
    }
};
