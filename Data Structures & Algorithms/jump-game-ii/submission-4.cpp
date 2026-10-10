class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;

        for (int i = 0; i < nums.size(); i++) {
            int currReach = nums[i] + i, bestJump = -1, maxJumpIndex = i;

            for (int k = i+1; k <= currReach && k < nums.size(); k++) {
                if ( nums[k]+k >= bestJump ) {
                    bestJump = nums[k]+k;
                    maxJumpIndex = k;
                }
            }

            
            if (i != maxJumpIndex) {
                i = maxJumpIndex-1;
                jumps++;
            }

            if (currReach >= nums.size()-1)
                break;
        }
        return jumps;
    }
};
