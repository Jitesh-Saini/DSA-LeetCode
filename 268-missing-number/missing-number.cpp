class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i <= nums.size(); i++) {
            sum1 += i;
        }
        for (auto x : nums) {
            sum2 += x;
        }
        return sum1 - sum2;
    }
};