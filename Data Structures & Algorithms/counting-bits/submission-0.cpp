class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;

        for (int k = 0; k <= n; k++) {
            int count = 0;
            for (int i = 0; i < 32; i++) {
                if ((1 << i) & k)
                    count++;
            }
            v.push_back(count);
        }

        return v;
    }
};