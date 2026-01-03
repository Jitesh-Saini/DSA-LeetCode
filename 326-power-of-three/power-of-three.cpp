class Solution {
public:
    bool isPowerOfThree(int n) {
        int a = 3;
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