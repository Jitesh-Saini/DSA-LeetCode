class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int original = x;

        if (x < 0)
            return false;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;

            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        if (original == rev)
            return true;
        else
            return false;
    }
};