class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<int> ans;
        while (k--) {
            int maxFreq = 0, maxVal;
            for (auto x: freq) {
                if (maxFreq < x.second) {
                    maxFreq = x.second;
                    maxVal = x.first;
                }
            }
            ans.push_back(maxVal);
            freq[maxVal] = 0;
        }
        return ans;
    }
};
