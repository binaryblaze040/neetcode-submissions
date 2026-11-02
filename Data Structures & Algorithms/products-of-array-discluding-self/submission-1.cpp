class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<long> preProduct(n), postProduct(n);

        vector<int> ans;

        preProduct[0] = nums[0];
        postProduct[n-1] = nums[n-1];

        for (int i = 1; i < n; i++) {
            preProduct[i] = nums[i] * preProduct[i-1];
        }

        for (int i = n-2; i >= 0; i--) {
            postProduct[i] = nums[i] * postProduct[i+1];
        }

        for (int i = 0; i < n; i++) {
            int curr;
            if (i == 0) {
                curr = postProduct[i+1];
            }
            else if (i == n-1) {
                curr = preProduct[i-1];
            }
            else {
                curr = preProduct[i-1] * postProduct[i+1];
            }

            ans.push_back(curr);
        }

        return ans;
    }
};



