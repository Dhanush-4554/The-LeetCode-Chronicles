class Solution {
public:
    // bool isPrime(int i){
    //     if(i<2) return false;

    //     for(int j=2; j<=i ; j++){
    //         if(i%j==0) return false;
    //     }
    //     return true;
    // }  TLE


    // bool isPrime(int i){
    //     if(i<2) return false;

    //     for(int j=2; j<=sqrt(i); j++){
    //         if(i%j==0) return false;
    //     }
    //     return true;
    // }     TLE
    
    // int countPrimes(int n) {
    //     int count = 0;
    //     for(int i = 0; i<n; i++)
    //         if(isPrime(i)) count++;
    //     return count;
    // }        TLE




    int countPrimes(int n) {
        if(n==0) return 0;
        vector<bool> prime(n,true);

        prime[0]=prime[1]=false;
        int count = 0;

        for(int i=2 ; i<n; i++){
            if(prime[i]) count++;

            int j = 2*i;

            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
        return count;
    } 
};
