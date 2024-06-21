class Solution {
public:
    bool isPalindrome(int x) {
          if (x < 0)
        return false;
        int num=x;
        int reversed=0;
        while(num!=0){
            int digit=num%10;
            num/=10;
            if (reversed > (INT_MAX - digit) / 10) {
                return false; // This would overflow reversed
            }
            reversed=(reversed*10) + digit;
        }

        if(x==reversed)
        return true;
        return false;
    }
};
