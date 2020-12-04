class Solution {
public:
    
//     bool isPrime(int num) {
//         for(auto i=2; i*i<=num; i++) {
//             if(num%i==0)
//                 return false;
//         }
//         return true;
//     }
    
//     int countPrimes(int n) {
//         int count=0;
        
//         if(n<2)
//             return 0;
//         for(auto i=2; i<n; i++) {
//             if(isPrime(i))
//                 count++;
//         }
//         return count;
//     }
    //Above complexity is O(n1.5), sieve is O(nlogn)
    
    int countPrimes(int n) {
        if(n<2)
            return 0;
        
        vector <bool> prime (n, true);
        prime[0] = false;
        prime[1] = false;
​
        for(auto i=0; i*i<n; i++) {
            if(prime[i]) {
                for(auto j=i*i; j<n; j+=i) {
                    prime[j] = false;
                }
            }
        }
        
        return count(prime.begin(), prime.end(), true);;
    }
    
};
