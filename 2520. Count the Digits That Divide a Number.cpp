class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;
        while(num>0) {
            int digit = num % 10;
            if(n % digit == 0) {
                count++;
            }
            num = num/10;
        }
        return count ;
    }
};
