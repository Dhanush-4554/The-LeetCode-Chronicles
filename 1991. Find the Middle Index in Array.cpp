class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int final =0;
        for(int i=0;i<nums.size();i++)
            final  = final  + nums[i];

        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            if(sum == (final  - (sum -nums[i])))
                return i;
        }
        return -1;
    }
};
