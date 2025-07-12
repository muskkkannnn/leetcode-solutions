class Solution {
public:
    int reverse(int n) {
        long x = n;
        long revNum = 0;
        int sign = (x<0) ? -1 : 1;
        x = sign * x;
        
        while(x>0) {
            int lastDigit = x % 10;

            if (revNum > (INT_MAX - lastDigit) / 10) {
                return 0;
            }
            else {
                revNum = (revNum * 10) + lastDigit;
                x = x/10;
            }
        }
        return revNum * sign;
    }
};
