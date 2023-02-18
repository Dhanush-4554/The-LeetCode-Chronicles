class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size(); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (target == nums[i] + nums[j] && i != j) {
                    return {i,j};
                }
            }
        }
        return{};
    }
};
