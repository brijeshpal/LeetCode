class Solution {
public:
    int reverse(int x) {
        int rev=0,digit;
        while(x!=0)
        {
            digit=x%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
            return 0; // Overflow detected
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
            return 0; // Underflow detected
        }
            rev=rev*10+digit;
            x=x/10;
        }
        return rev;   
    }
};