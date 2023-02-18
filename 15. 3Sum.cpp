class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<nums.size(); i++){
            int a = nums[i];  //a+b+c=0 --> b+c=-a
            int target = -a;
            int start = i+1, end= nums.size()-1;
            while(start < end){
                if(nums[start]+nums[end]==target){
                    ans.push_back({nums[i],nums[start],nums[end]});
                    while(start<end && nums[start]==nums[start+1]) start++;
                    while(start<end && nums[end]==nums[end-1]) end--;
                    start++;
                    end--;
                }
                else if(nums[start]+nums[end]>target)
                    end--;
                else
                    start++;
            }
            //to avoid repition of vector
            while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};
