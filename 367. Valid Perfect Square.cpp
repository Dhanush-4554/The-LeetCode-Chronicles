class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        return 1;

     
        for(long i =1; i<=num/2 ;i++){
            if(i*i == num){
                return 1;
                break;
            }
        }
        return 0;
    }
};
