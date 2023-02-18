class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // vector<int> ans;
        // long long int sum = 0,i;
        // int n = num.size();

        // for( i = 0; i<n ; i++){
        //     sum = sum*10 +  num[i];
        // }
        // sum = sum + k;
        // while(sum!=0){
        //     int digit = sum%10;
        //     ans.push_back(digit);
        //     sum=sum/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
        reverse(num.begin(), num.end());
        for(int i=0;i<num.size();i++){
            int sum = num[i]+k;
            int dig = sum%10;
            k = sum/10;
            num[i]=dig;
        }
        while(k>0){
            int dig = k%10;
            num.push_back(dig);
            k/=10;
        }
        reverse(num.begin(), num.end());
        return num;
    }
};
