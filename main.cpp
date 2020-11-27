class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        
        for (int i = digits.size() - 1; i >= 0; --i) {
            int temp = digits[i];
            
            if (temp < 9) {
                digits[i]++;
                carry = 0;
                break;
            }
            else {
                digits[i] = 0;
                carry = 1;
            }
        }
        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
