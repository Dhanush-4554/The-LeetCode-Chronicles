class Solution {
public:
    int distinctIntegers(int n) {
        if(n<=2)
            return 1;
        else
            return n-1;
    }
};
