class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int m = digits.size();
        for(int i=m-1; i>=0;i--){
            if (digits[i]<9){
                digits[i]++;
                return digits;
            }
             digits[i] =0;
        }
       vector<int>newnumber(m+1,0);
        newnumber[0] =1;
        return newnumber;
    }
};
