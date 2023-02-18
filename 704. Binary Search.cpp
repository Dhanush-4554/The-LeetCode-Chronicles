class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int mid;
        int high = nums.size() - 1;
        while(low<=high){
            mid = (low+high)/2;
            if(target==nums[mid]){
                return mid;
                break;
            }
            else if(target<nums[mid])
                high = mid - 1;
            else
                low = mid+1;
        }
        return -1;
    }
};
