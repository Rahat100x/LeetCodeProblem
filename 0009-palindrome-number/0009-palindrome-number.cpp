class Solution {
public:
    bool isPalindrome(int x) {
        int revers = 0,n = x;
        if(x < 0) return 0;
        while(x != 0) {
            int digit = x % 10;
            if(revers > INT_MIN/10 && revers < INT_MAX/10) {
                revers = revers * 10 + digit;
            }
            x /= 10;
        } 
        if(n == revers) return 1;
        return 0;
    }
};