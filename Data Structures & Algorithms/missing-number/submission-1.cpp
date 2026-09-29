class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long currSum = 0;
        bool zero = false;
        int maxNum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zero = true;
            currSum += nums[i];
            maxNum = max(maxNum, nums[i]);
        }
        long long sum = (maxNum * (maxNum+1))/2; 
        return sum - currSum == 0 ? (zero ? maxNum+1 : 0) : sum - currSum;
    }
};
