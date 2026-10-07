class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;

        unordered_map<int, int> sFreq, tFreq;
        for (int i = 0; i < s.size(); i++) {
            sFreq[s[i]]++;
            tFreq[t[i]]++;
        }

        for (auto x: sFreq) {
            if (sFreq[x.first] != tFreq[x.first])
                return false;
        }

        return true;
    }
};
