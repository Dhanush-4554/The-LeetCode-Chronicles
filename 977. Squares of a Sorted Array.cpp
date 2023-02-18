class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        for(int i=0; i<nums.size(); i++){
            int digit = pow(nums[i],2);
            sq.push_back(digit);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};
