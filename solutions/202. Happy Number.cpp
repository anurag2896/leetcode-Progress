class Solution {
public:
    
    int digitSquareSum(int n) {
        int res=0, rem;
        while(n){
            rem=n%10;
            res+=pow(rem,2);
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        int slow=n, fast=n;
        do {
            slow=digitSquareSum(slow);
            fast=digitSquareSum(digitSquareSum(fast));
        } while(slow!=fast);
            
        if(fast==1)
            return true;
        else 
            return false;
    }
};
