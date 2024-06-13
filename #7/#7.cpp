
class Solution {
public:
    int reverse(int x) {
        vector<int> digits;
        int number=0;
        bool isNegetive=x<0;
        x=abs(x);
        if(x==0){
            return x;
        }
        while (x > 0) {
            int digit = x % 10;    // Get the last digit
            digits.push_back(digit); // Store the digit in the vector
            x = x / 10;             // Remove the last digit
        }
        for (int digit : digits) {
         if(number>(INT_MAX- digit)/10){
            return 0;
         }
         number = number * 10 + digit;
    }
            return isNegetive? -number : number;

    }
};
