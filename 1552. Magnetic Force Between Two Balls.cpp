// Binary Search !!!!


class Solution {
public:
    bool possibility(int n, int k, vector<int> &nums,int mid){
        int a = nums[0], cnt = 1;
        for(int i = 1; i<n ;i++){
            if(nums[i]-a >= mid){
                cnt++;
                a=nums[i];
            }
            if(cnt == k) return true;
        }
        return false;
    }


    int maxDistance(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 1;
        sort(nums.begin(),nums.end());
        int high = nums[n-1]-nums[0];
        int ans = 1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(possibility(n,k,nums,mid)==true){
                ans = max(ans,mid);
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};
