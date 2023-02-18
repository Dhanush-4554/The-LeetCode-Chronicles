class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        
        int total_gas=0;
        int total_cost=0;

        for(int i=0; i<n; i++){
            total_gas= total_gas + gas[i];
            total_cost=total_cost + cost[i];
        }
        if(total_gas < total_cost){
            return -1;
        }

        int current_gas=0;
        int count =0;

        for(int i=0; i<n; i++){
            current_gas = current_gas + gas[i]-cost[i];
            if(current_gas < 0){
                current_gas = 0;
                count = i+1;
            }
        }
     return count ;
    }
};
