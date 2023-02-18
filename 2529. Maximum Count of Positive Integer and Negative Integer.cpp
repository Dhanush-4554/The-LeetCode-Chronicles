class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0;
        int count = 0;

        int n = nums.size();
        
        for(int i = 0; i<n ; i++) {
            if(nums[i]>=1) {
                count++;
            }
            if(nums[i]<0) {
                neg++;
            }
            
        }
        if(count >= neg) {
            return count;
        }
        else{
            return neg;
        }
    }
};
