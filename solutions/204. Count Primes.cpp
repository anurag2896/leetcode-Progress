class Solution {
public:
    
    bool isPrime(int num) {
        for(auto i=2; i*i<=num; i++) {
            if(num%i==0)
                return false;
        }
        return true;
    }
    
    int countPrimes(int n) {
        int count=0;
        
        if(n<2)
            return 0;
        for(auto i=2; i<n; i++) {
            if(isPrime(i))
                count++;
        }
        return count;
    }
};
