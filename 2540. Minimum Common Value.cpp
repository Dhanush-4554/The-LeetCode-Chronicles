class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = 0;
        int m = 0;
        while(n<nums1.size() && m<nums2.size()){
            if(nums1[n]== nums2[m])
                return nums1[n];
            else if (nums1[n]<nums2[m])
                n++;
            else
                m++;
        }
        return -1;
    }
};
