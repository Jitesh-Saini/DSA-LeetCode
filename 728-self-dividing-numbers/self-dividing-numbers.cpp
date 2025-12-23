class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            int num = i;

            while (num) {
                int last = num % 10;

                if (last == 0 || i % last != 0) {
                    break;
                }
                num /= 10;
            }

            if (num == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
