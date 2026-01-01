class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;   // +1 karna hai

        // right se left chalo
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }

        // agar last me bhi carry bacha (999 case)
        if (carry == 1) {
            vector<int> ans(n + 1);
            ans[0] = 1;
            for (int i = 0; i < n; i++) {
                ans[i + 1] = digits[i];
            }
            return ans;
        }

        return digits;
    }
};
