class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;

        while(n){

            int last = n%10;

            sum += last;

            prod *= last;

            n /= 10;
        }
        
        
        return prod-sum;
    }
};