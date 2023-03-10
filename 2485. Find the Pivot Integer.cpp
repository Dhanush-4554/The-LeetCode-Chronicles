class Solution {
public:
    int pivotInteger(int n) {
        vector<int> nums;
        for(int i =0; i<n; i++)
            nums.push_back(i+1);
        int final =0;
        for(int i=0;i<nums.size();i++)
            final  = final  + nums[i];

        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            if(sum == (final  - (sum -nums[i])))
                return nums[i];
        }
        return -1;
    }
};
