//usage of do while finally !!!!!!


class Solution {
public:
    bool isHappy(int n) {
        int ans=n;
        do
        {
            int d = ans;
            ans =0;
            while(d)
            {
                ans +=pow(d%10,2);
                d/=10;
            }
            
        }while(ans>9 || ans==7); 


        if(ans==1)
        return true;
        else
        return false;

    }
};
