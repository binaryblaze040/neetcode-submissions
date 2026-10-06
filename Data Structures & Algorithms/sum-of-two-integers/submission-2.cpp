class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0;
        bool carry = false;

        for (int i = 0; i < 32; i++) {
            int curr = 1 << i;
            if ((curr & a) && (curr & b)) {
                if (carry) {
                    sum = sum | curr;
                }
                carry = true;
            }
            else if ((curr & a) ^ (curr & b)) {
                if (!carry) {
                    sum = sum | curr;
                }
            }
            else if (carry) {
                sum = sum | curr;
                carry = false;
            }
        }

        return sum;
    }
};
