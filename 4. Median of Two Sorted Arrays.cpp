class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> answer;
        for(int i=0 ; i<nums1.size() ; i++){
            answer.push_back(nums1[i]);
        }
        for(int j=0 ; j<nums2.size() ; j++){
            answer.push_back(nums2[j]);
        }


        sort(answer.begin() , answer.end());
        int n = nums1.size() + nums2.size();
        double result = 0;
        if(n%2 != 0){
            result = answer[n/2];
        }
        else{
            result = (answer[n/2 -1] + answer[n/2])/2.0;
        }
        return result;
    }
};
