class Solution {
public:
    bool isPowerOfFour(int n) {
        int a = 4;
        if (n <= 0) {
            return false;
        }
        while (n % a == 0) {
            n /= a;
        }
        if (n == 1) {
            return true;
        } else
            return false;
    }
};