class Solution {
public:
    int countDigits(int n) {
        int count = 0, temp = n;
        while (n) {
            int last = n % 10;
            if (temp % last == 0) {
                count++;
            }
            n /= 10;
        }
        return count;
    }
};