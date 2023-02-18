class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int k=0;

        if(nums.size()==0)
            return 0;

        else {
            for(i=0;i<nums.size();i++)  {
                if(nums[k]!=nums[i])
                    nums[++k]=nums[i];
            }
            return k+1;
        }
    }
};
