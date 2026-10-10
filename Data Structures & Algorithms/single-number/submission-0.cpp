class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorSum = 0;
        for (int i: nums) {
            xorSum ^= i;
        }
        return xorSum;
    }
};
