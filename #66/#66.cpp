class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        for (int i=l-1;i>= 0;i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            // If digit is 9, set it to 0
            digits[i] = 0;
        }
        // If all digits were 9, we need an extra digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

