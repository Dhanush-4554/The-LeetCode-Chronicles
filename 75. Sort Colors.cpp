// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i =0; i<n; i++){
            for(int j = 0; j<n-i; j++){
                if(nums[j]>nums[j+1])
                    swap(nums[j],nums[j+1]);
            }
        }
    }
};
