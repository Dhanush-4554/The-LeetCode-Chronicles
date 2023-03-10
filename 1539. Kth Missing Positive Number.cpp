class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a = 0, i;
        for(i = 1; i<arr[arr.size()-1] ;i++){
            if(i == arr[a]) a++;
            else k--;
            if(k==0) return i;
        }
        return i+k;
    }
};
