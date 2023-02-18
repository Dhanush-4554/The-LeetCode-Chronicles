class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        int digit ;
        
        for(int i = 0; i<n ; i++) {
            sum1 = sum1 + nums[i];
        }
        for(int j = 0; j<n ; j++) {
            while (nums[j] != 0) {
                sum2 = sum2 + nums[j]%10;
                nums[j] = nums[j]/10;
            }
        }
        return sum1 - sum2;
    }
};
