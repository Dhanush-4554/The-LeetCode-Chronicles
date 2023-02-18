class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for (int i=2 ; i<n ; i++){
            if(n%i==0)
              count++;
        }
        count = count + 2;
        if (count == 3)
         return 1;
        return 0;
    }
};
