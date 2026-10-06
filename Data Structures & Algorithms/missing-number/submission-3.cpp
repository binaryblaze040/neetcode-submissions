class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums[0], currXorSum = 0;
        for (auto i: nums) {
            if (i > n) {
                n = i;
            }
            currXorSum ^= i;
        }
        
        if (n+1 == nums.size()) {
            return n+1;
        }

        for (int i = 1; i <= n; i++) {
            currXorSum ^= i;
        }

        return currXorSum;
    }
};
