class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freqs;

        for (int i = 0; i < strs.size(); i++) {
            vector<int> currFreq(26, 0);

            for (int j = 0; j < strs[i].size(); j++) {
                currFreq[strs[i][j] - 'a']++;
            }

            string currStr = "";
            for (int i = 0; i < 26; i++) {
                currStr += currFreq[i];
            }

            freqs[currStr].push_back(strs[i]);
        }

        vector<vector<string>> anagramGrouped;
        for (auto x: freqs) {
            vector<string> curr;
            for (auto y: x.second) {
                curr.push_back(y);
            }
            anagramGrouped.push_back(curr);
        }

        return anagramGrouped;
    }
};
