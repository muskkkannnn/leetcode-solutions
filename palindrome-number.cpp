class Solution {
public:
    bool isPalindrome(long x) {
        long revNum = 0;
        long dup = x;  //Duplicating the number

        while(x>0) {
            int lastDigit = x % 10;  //last digit extraction
            revNum = (revNum*10) + lastDigit;
            x = x/10;  //removing the last digit and then looping the number
        }

        if(revNum == dup) {
            return true;
        }
        else{
            return false;
        }
    }
};
