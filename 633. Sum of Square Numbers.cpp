class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long int a=0, b=sqrt(c);
        while(a<=b){
            long long int n =(a*a)+(b*b);
            if(n==c)
                return true;
            else if(n>c)
                b--;
            else
                a++;
        }
        return false;
    }
};
