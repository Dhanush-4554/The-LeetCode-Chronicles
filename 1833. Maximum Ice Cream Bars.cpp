class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int m = costs.size();
        
        int count = 0;
        for(int i = 0; i<m ; i++) {
            if(costs[i] <= coins && coins>0 ) {
                coins = coins - costs[i];
                count++;
            }
        }
        return count;
    }
};
