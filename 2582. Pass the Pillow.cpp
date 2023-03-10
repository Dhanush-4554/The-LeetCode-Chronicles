class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 1;
        int flag = 1;
        
        while(time--){
            if(ans==n)
                flag = -1;
            if(ans==1)
                flag = 1;
            ans=ans+flag;
        }
        return ans;
    }
};
